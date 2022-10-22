-O0 (O ноль) - это самые простые и примитивные оптимизации.<br/>
-O1 - более сильные оптимизации.<br/>
-O2 - оптимизировать все, что можно, но только проверенные и надежные оптимизации.<br>
-O3 - жесткая и насильная оптимизация, применяются экспериментальные методы.<br/>
-Os — оптимизация размера<br/>
-Ofast — оптимизация скорости<br/>
-Og — оптимизация для дебага <br/>
<br/>
<br/>
complex.cpp<br/>
time: 0.556s <br/>
size: 17408<br/>
<br/>
-O0 complex.cpp<br/>
time: 0.299s<br/>
size: 17408<br/>
<br/>
-O1 complex.cpp<br/>
time: 0.292s<br/>
size: 17262<br/>
<br/>
-O2 complex.cpp<br/>
time: 0.285s<br/>
size: 17262<br/>
<br/>
-O3 complex.cpp<br/>
time: 0.274s<br/>
size: 17262<br/>
<br/>
-Os complex.cpp<br/>
time: 0.331s <br/>
size: 17248<br/>
<br/>
-Ofast complex.cpp<br/>
time: 0.351s <br/>
size: 18578<br/>
<br/>
-Og complex.cpp<br/>
time: 0.349s<br/>
size: 17344a<br/>
