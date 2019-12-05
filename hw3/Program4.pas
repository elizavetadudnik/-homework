// 4) Дано целое число N (> 0). Найти сумму N^2 + (N + 1)^2 + (N + 2)^2 + … + (2·N)^2
//(целое число).

var
  N, r,l, sum: integer;
begin
  writeln('введите целое число N');
  readln(N);
  r:=sqr(n);
  if N > 0 then 
  begin
    for var i := 1 to N do
    begin
    sum := N + i;
    l := sqr (sum);
    r := r + l; 
    end;
    writeln(r);
  end
  else writeln('введены неверные числа');
end.
  
  
 

