// Найти номер последней строки,содерж. только четные числа.

const 
  rowLength = 5;
  columnLength = 3;
  
var 
  arr: array[1..rowLength, 1..columnLength] of integer;
  indexRowEven: integer;
  rowEven: boolean;
  
begin
  indexRowEven := 0;
  rowEven := true;
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
  
  
  for var i := 1 to rowLength do
  begin
    for var j := 1 to columnLength do
    begin
      if arr[i, j] mod 2 <> 0 then
        rowEven := false;
    end;
    
    if rowEven then
      indexRowEven := i;
      
    rowEven := true;
  end;
  
  
  writeln(indexRowEven);
end.