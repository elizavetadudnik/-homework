// 4) Дано целое число N (> 0). Найти сумму N^2 + (N + 1)^2 + (N + 2)^2 + … + (2·N)^2
//(целое число).

var
  N, squaredNumber, sum: integer;
  
begin
  writeln('введите целое число N');
  readln(N);
  
  if N > 0 then 
  begin
    for var i := N to 2 * N do
    begin
      squaredNumber := sqr(i);
      sum += squaredNumber; 
    end;
    writeln(sum);
  end
  else 
    writeln('введены неверные числа');
end.
  
  
 

