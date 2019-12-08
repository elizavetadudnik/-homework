
var 
  x, N, sign: integer;
  expression,factorial, powerOfX: real;
begin 
  readln(X, N);
  expression := 1;
  factorial := 1;
  powerOfX := 1;
  sign := 1;
  
  for var i := 1 to N do
    if i mod 2 <> 0 then
    begin;
      factorial *= i 
   
    end;
    sign *= -1;
    powerOfX *= X;
    expression += sign * powerOfX / factorial;
  writeln(expression);
end.
  
  
  