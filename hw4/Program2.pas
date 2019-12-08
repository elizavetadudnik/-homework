var
  N, sum: integer;
  
begin
  readln(N);
  sum := 0;
  
  if N > 0 then
  begin
    for var i := 1 to N do
      sum += 1 / i;
  end;
  if N <= 0 then
    writeln('введены неверные числа');
  writeln(sum);
end.