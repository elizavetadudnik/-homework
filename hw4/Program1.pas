
var 
  x, N, sign: integer;
  expression, factorial, powerOfX: real;
begin 
  readln(X, N);
  expression := 0;
  factorial := 1;
  powerOfX := 1;
  sign := 1;
  
  for var i := 1 to 2 * N + 1 do
  begin
    factorial *= i; 
    if i mod 2 <> 0 then
    begin
      powerOfX *= X;
      expression += sign * powerOfX / factorial;
      sign *= -1;
    end;
  end;
  writeln(expression);
end.
  
  
  