var
  number1, number2, i: real;
  N: integer;
  
begin
  while N > 0 do
  begin
  writeln(N mod 10);
  i := N div 10;
  end;
end.