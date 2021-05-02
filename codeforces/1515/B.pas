const
  fi='LIS.INP';
  fo='LIS.OUT';
var
  t:longint;
  n:real;
//
procedure ofile;
begin
  assign(input,fi); reset(input);
  assign(output,fo); rewrite(output);
end;
//
procedure cfile;
begin
  close(input); close(output);
end;

//
procedure solve;
var
  I:longint;
begin
  readln(t);
  for i:=1 to t do
    begin
      readln(n);
      if (sqrt(n/2)=round(sqrt(n/2))) or (sqrt(n/4)=round(sqrt(n/4))) then writeln('YES')
      else writeln('NO');
    end;
end;
//
begin
 // ofile;
 // enter;
  solve;
//  cfile;
end.
