Асимптотическая сложность сортировки выбором это полиномиальный рост:

$$
O(n^2)
$$

Асимптотическая сложность быстрой сортировки это логaрифмический рост:

$$
O(log{}{n})
$$

По основной теореме о реккурентных соотношениях

$$
T(n) = {a}{}T(a/b) + f(n)
$$

Выходит,что для второго случая получается:

$$
T(n) = {2}{}T(n/2) + O(1) 
$$

Для первого случая:

$$
T(n) = {2}{}T(n/2) + n^2
$$

$$
T(n) = n + T(1) + T(n - 1) = n + O(1) + T(n - 1) = n + O(1) + (n - 1 + O(1) + T(n - 2)) = O(n^2)
$$


$$
$\iiint_V \nabla \cdot \mathbf{F} dV$
$$


