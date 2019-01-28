# byteOrderDetector
Return a the machine bype order: big-endian or little-endian

Big-endian:<p>
<pre>
32bit Integer:
+----+----+----+----+
| 0A | 0B | 0C | 0D |
+----+----+----+----+
Memory:
a-1 ...
a   | 0A |
a+1 | 0B |
a+2 | 0C |
a+3 | 0D |
a+4  ...
</pre>

Little-endian:<p>
<pre>
32bit Integer:
+----+----+----+----+
| 0A | 0B | 0C | 0D |
+----+----+----+----+
Memory:
a-1 ...
a   | 0D |
a+1 | 0C |
a+2 | 0B |
a+3 | 0A |
a+4  ...
</pre>
