//uses math;
const
  fi='DONGVANG.INP';
  fo='DONGVANG.OUT';
var
  t:integer;
  cur:string;
////
procedure ofile;
begin
  {$ifndef ONLINE_JUDGE}
    assign(input,fi); reset(input);
    assign(output,fo); rewrite(output);
  {$endif}
end;
////
procedure cfile;
begin
  close(input); close(output);
end;
//
procedure enter;
var
  i,j:longint;
begin
  readln(t);
  for i:=1 to t do
    begin
      readln(cur);
      if (length(cur) mod 2=1) then writeln('NO')
      else if (cur[1] <> ')') and (cur[length(cur)] <> '(') then writeln('YES')
      else writeln('NO');
    end;
end;
//
begin
  ofile;
  enter;
  //solve;
  cfile;
end.
