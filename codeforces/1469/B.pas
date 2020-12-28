uses math;
const
  fi='DONGVANG.INP';
  fo='DONGVANG.OUT';
var
  t:integer;
  a,b:array[1..10000] of integer;
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
  i,j,sum,sum1,max1,max2,n,m:longint;
begin
  readln(t);
  for i:=1 to t do
    begin
      sum:=0; sum1:=0; max1:=0; max2:=0;
      readln(n);
      for j:=1 to n do
        begin
          read(a[j]);
          inc(sum,a[j]);
          max1:=max(max1,sum);
        end;
      readln(m);
      for j:=1 to m do
        begin
          read(b[j]);
          inc(sum1,b[j]);
          max2:=max(max2,sum1);
        end;
      writeln(max1+max2);
    end;
end;
//
begin
  ofile;
  enter;
  //solve;
  cfile;
end.
