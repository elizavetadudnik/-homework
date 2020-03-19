// Дана целочисленная матрица размера M x N. Найти элемент, являющийся максимальным в своей строке и 
// минимальным в своем столбце. Если такой элемент отсутствует, вывести 0.
const 
  rowLength = 3;
  columnLength = 4;
  
var 
  arr: array[1..rowLength, 1..columnLength] of integer;
  maxColumn, maxRow: integer;
  
begin
  maxColumn := integer.MinValue;
  maxRow := integer.MinValue;
  for var i := 1 to rowLength do
  begin
    for var j := 1 to columnLength do
    begin
      arr[i, j] := random(1, 9);
    end;
  end;
    
  for var i := 1 to rowLength do
  begin
    for var j := 1 to columnLength do
    begin
      write(arr[i, j], '  ');
    end;
    writeln();
  end;
  
  for var i := 1 to columnLength do
  begin
    for var j := 1 to rowLength do
    begin
      if arr[i, j] > maxColumn then
      maxColumn := arr[i, j];
    end;
    writeln(maxColumn);
  end;
  for var j := 1 to rowLength do
   begin
    for var i := 1 to columnLength do
    begin 
      if arr[j, i] > maxRow then
      maxRow := arr[i, j];
    end;
    writeln(maxRow);
  end;
end.
