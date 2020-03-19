//  Поменять местами столбец с номером N и первый из столбцов, содержащ. только отрицат. эл.

const 
  rowLength = 3;
  columnLength = 5;
  
var 
  arr: array[1..rowLength, 1..columnLength] of integer;
  N, temp: integer;
  columnNeg: boolean;
  
begin
  columnNeg := true;
  readln(N);
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
  
  for var j := 1 to columnLength do
  begin
    for var i := 1 to rowLength do
    begin
      if arr[i, j] >= 0 then
        columnNeg := false;
    end;
    
    if columnNeg then
    begin
      for var k := 1 to rowLength do
      begin
        temp := arr[k, N];
        arr[k, N]:= arr[k, j];
        arr[k, j] := temp;
      end;
      
      break;
    end;    
  end;
  writeln;
  
  for var i := 1 to rowLength do
  begin
    for var j := 1 to columnLength do
    begin
      write(arr[i, j], '    ');
    end;
    writeln();
  end;
end.