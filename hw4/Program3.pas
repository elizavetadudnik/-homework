var 
  k, A, B: integer;
  
begin
  writeln('Введите A');
  readln(A);
  writeln('Введите B');
  readln(B);
  
  for var i := A to B do 
  begin
    for k := 1 to i do 
      write(i, ' ');
  end; 
 
end.
