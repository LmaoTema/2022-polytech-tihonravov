# 2022-polytech-tihonravov

Если море было водкой,я бы был подводной лодкой.

Используем формулу Стокса:

$\oint_S{\vec{A} \times \mathrm{d}\vec{S}} = \int_V{\mathrm{rot}\,\vec{A}}\cdot\mathrm{d}\vec{V}$

где $\mathrm{rot}\,\vec{A}$ -- ротор векторного поля $\vec{A}$.

В нашем случае $\vec{A} = \vec{b} \times \vec{r}$, причем $\vec{b}$ -- постоянный вектор, а $\vec{r}$ -- радиус-вектор точки на поверхности $S$. Также в формуле есть скалярное произведение векторов, для которого воспользуемся свойством смешанного произведения:

$(\vec{b} \times \vec{r}) \cdot (\vec{b} \times \vec{n}) = \vec{b} \cdot (\vec{r} \times (\vec{b} \times \vec{n})) = \vec{b} \cdot (\vec{n} \cdot \vec{b}) - \vec{b} \cdot (\vec{r} \cdot \vec{n}) = b^2 - \vec{b} \cdot (\vec{r} \cdot \vec{n})$

Получается, что

$\oint_S{(\vec{b} \times \vec{r}) \times (\vec{b} \cdot \vec{n})\mathrm{d}S} = \int_V{(\mathrm{rot}\,(\vec{b} \times \vec{r})) \cdot (\vec{b} \cdot \vec{n}) \mathrm{d}V} = \int_V{(\nabla \times (\vec{b} \times \vec{r})) \cdot (\vec{b} \cdot \vec{n}) \mathrm{d}V}$

Раскроем ротор произведения векторов:

$\nabla \times (\vec{b} \times \vec{r}) = \vec{b}(\nabla \cdot \vec{r}) - \vec{r}(\nabla \cdot \vec{b}) + (\vec{r} \cdot \nabla)\vec{b} - (\vec{b} \cdot \nabla)\vec{r}$

Окончательно интеграл примет вид:

$\oint_S{(\vec{b} \times \vec{r}) \times (\vec{b} \cdot \vec{n})\mathrm{d}S} = \int_V{((\vec{b} \cdot \nabla)\vec{r}) \cdot (\vec{b} \cdot \vec{n}) - (\vec{r} \cdot \nabla)(\vec{b} \cdot \vec{n}) \mathrm{d}V} + b^2\int_V{\vec{n} \cdot \mathrm{d}V}$

Первый интеграл в правой части обращается в нуль в силу теоремы о дивергенции (интеграл дивергенции векторного поля по объему тела равен интегралу нормальной проекции вектора на поверхность тела) и того факта, что $\vec{b}$ является постоянным вектором, а второй интеграл равен объему тела, умноженному на $b^2$ (скалярное произведение единичного вектора $\vec{n}$ на направляющие вектора координат в декартовой системе координат равняется единице).

Итак, в результате получаем:

$\oint_S{(\vec{b} \times \vec{r}) \times (\vec{b} \cdot \vec{n})\mathrm{d}S} = Vb^2$

Ответ: $Vb^2$.
