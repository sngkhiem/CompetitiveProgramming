var     t,i,j,n:longint;
        c:boolean;
        a:array [1..50] of longint;
procedure sort;
var       u,v,t:longint;
begin
     for u:=1 to n-1 do
         for v:=u+1 to n do
             if a[u]>a[v] then
                begin
                  t:=a[u];
                  a[u]:=a[v];
                  a[v]:=t;
                end;
end;
begin
        {$ifndef ONLINE_JUDGE}
	    assign(input,'input.txt'); reset(input);
    	assign(output,'output.txt'); rewrite(output);
	    {$endif}
	    readln(t);
        for i:=1 to t do
            begin
              readln(n);
              for j:=1 to n do read(a[j]);
              readln;
              c:=true;
              sort;
              for j:=2 to n do
                  if a[j]-a[j-1]>1 then
                     begin
                       writeln('NO');
                       c:=false;
                       break;
                     end;
               if c then writeln('YES');
               fillchar(a,sizeof(a),0);
            end;
end.