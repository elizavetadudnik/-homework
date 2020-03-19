// Найти номер слолбца с наименьшим произведением элементов. Вывести этот номер и наим. произведение.

const 
  rowLength = 3;
  columnLength = 5;
  
var 
  arr: array[1..rowLength, 1..columnLength] of integer;
  pr, minPr, minPrIndex: integer;
  
begin
  minPrIndex := 0;
  minPr := integer.MaxValue;
  pr := 1;
  for var i := 1 to rowLength do
  begin
    for var j := 1 to columnLength do
    begin
      arr[i, j] := random(-9, 9);
    end;
  end;
  
  for var i := 1 to rowLength do
  begin
    for var j := 1 to columnLength do
    begin
      write(arr[i, j], '    ');
    end;
    writeln();
  end;

  for var i := 1 to columnLength do
  begin
    for var j := 1 to rowLendth do
    begin
      pr *= arr[i, j];  
    end;
    if pr < minPr then
    begin
      minPr := pr;
      minPrIndex := i;
    end;
    pr := 1;
  end;
  writeln(minPr, '  ', minPrIndex);
end.