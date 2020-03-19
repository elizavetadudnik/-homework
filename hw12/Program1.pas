// Дана целочисленная матрица размера M x N. Найти элемент, являющийся максимальным в своей строке и 
// минимальным в своем столбце. Если такой элемент отсутствует, вывести 0.
const 
  rowLength = 3;
  columnLength = 3;
  
var 
  arr: array[1..rowLength, 1..columnLength] of integer;
  minColumn, maxRow: integer;
  elementExists: boolean;
  
begin
  elementExists := false;
  minColumn := integer.MaxValue;
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
  
  for var i := 1 to rowLength do
  begin
    for var j := 1 to columnLength do
    begin
      for var k := 1 to columnLength do
      begin
        if arr[i, k] > maxRow then
          maxRow := arr[i, k];
      end;
      
      for var k := 1 to rowLength do
      begin
        if arr[k, j] < minColumn then
          minColumn := arr[k, j];
      end;
      
      if (arr[i, j] = maxRow) and (arr[i, j] = minColumn) then
      begin
        writeln(arr[i, j]);
        elementExists := true;
      end;     
    end;
    
    maxRow := integer.MinValue;
    minColumn := integer.MaxValue;
  end;
  
  if not elementExists then
    writeln('такого элемент нетттт');
end.
