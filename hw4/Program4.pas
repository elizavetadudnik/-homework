
var
  N, power, powered3: integer;
  
begin
  writeln('введите N');
  readln(N);  
  powered3 := 1;
  power := 0;
  
  if N > 0 then
  begin
    while powered3 < N do
    begin
      power += 1;
      powered3 *= 3;    
    end;      
  end;
  
  writeln(power)
end.