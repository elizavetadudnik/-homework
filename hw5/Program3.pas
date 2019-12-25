var
  N, k: integer;

begin
  readln(N);
  writeln;
  while N > 0 do
  begin
    k := N mod 10;
    writeln(k);
    N := N div 10;
  end;
  writeln(N,k);
  if (N = 2) or (k = 2) then
  writeln('true')
  else if (N <> 2) and (k <> 2) then
  writeln('false');
end.