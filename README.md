# Heap Sort: Implementação em C

<div style="display: inline-block;">
<img align="center" height="20px" width="90px" src="https://img.shields.io/badge/Maintained%3F-yes-green.svg"/> 
<img align="center" height="20px" width="60px" src="https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white"/> 
<img align="center" height="20px" width="80px" src="https://img.shields.io/badge/Made%20for-VSCode-1f425f.svg"/> 
<a href="https://github.com/mpiress/midpy/issues">
<img align="center" height="20px" width="90px" src="https://img.shields.io/badge/contributions-welcome-brightgreen.svg?style=flat"/>
<img align="center" height="20px" width="80px" src="https://badgen.net/badge/license/MIT/green"/>
</a> 
</div>

<p> </p>
<p> </p>

<p align="justify">
Apresentado em 1964 por Robert W. Floyd e J.W.J Williams, o Heap Sort é um método da família de algoritmos de ordenação por seleção. Dentre suas vantagens, o método apresenta bom desempenho em conjuntos aleatórios de dados, bem como, consumo moderado de memória. Além disso, o desempenho de seu pior caso é praticamente o mesmo de seu caso médio, o que faz com que sua aplicação seja uma boa opção para entradas grandes de dados.
</p>

<p align="justify">
Em literatura, há diferentes maneiras de se implementar o Heap Sort, as mais comums utilizam listas de prioridade (LP) e/ou heaps para representar sua estrutura interna. As listas de prioridade são comuns em Sistemas Operacionais e apresentam, dentre suas funções, a capacidade de mapear o tempo de execução de processos, rastrear páginas em memória a serem substituídas e gerenciar processos. Como Heap, assumem funções generalistas e podem ser aplicadas nos mais diversos problemas que envolvam ordenação. Vejamos a seguir os custos envolvidos com ambas as estruturas de apoio. 
</p>

<div align="center">

| Custo           |  LP Ordenada            | LP não Ordenada         | Heap                    |
|:----------------|:-----------------------:|:-----------------------:|:-----------------------:|
| Construção      |<img src="https://render.githubusercontent.com/render/math?math=\mathcal{O}(n\log{}n)">|<img src="https://render.githubusercontent.com/render/math?math=\mathcal{O}(n)">|<img src="https://render.githubusercontent.com/render/math?math=\mathcal{O}(n)">|
| Inserção        |<img src="https://render.githubusercontent.com/render/math?math=\mathcal{O}(n)">|<img src="https://render.githubusercontent.com/render/math?math=\mathcal{O}(1)">|<img src="https://render.githubusercontent.com/render/math?math=\mathcal{O}(n\log{}n)">|
| Remoção         |<img src="https://render.githubusercontent.com/render/math?math=\mathcal{O}(1)">|<img src="https://render.githubusercontent.com/render/math?math=\mathcal{O}(n)">|<img src="https://render.githubusercontent.com/render/math?math=\mathcal{O}(n\log{}n)">| 
| União (ponteiro)|<img src="https://render.githubusercontent.com/render/math?math=\mathcal{O}(n)">|<img src="https://render.githubusercontent.com/render/math?math=\mathcal{O}(1)">|<img src="https://render.githubusercontent.com/render/math?math=\mathcal{O}(n\log{}n)">|
| União (vetor)   |<img src="https://render.githubusercontent.com/render/math?math=\mathcal{O}(n)">|<img src="https://render.githubusercontent.com/render/math?math=\mathcal{O}(n)">|<img src="https://render.githubusercontent.com/render/math?math=\mathcal{O}(n\log{}n)">|

</div>


<p align="justify">
Embora a lista por prioridade apresente resultados melhores, sua estrutura é limitada o que faz do Heap a melhor opção dentre as três. Nesse contexto, há estudos que podem melhorar o desempenho do método quando estruturado sob um heap. por exemplo, utilizando como estrutura de apoio árvores binomiais [vide teoria](https://pt.wikipedia.org/wiki/Heap_binomial).  
</p>

<p align="justify">
Como pode ser observado, métodos de ordenação por heaps tendem a utilizar estruturas abstratas de dados (i.e., TADs) cujas ações o permitem definir uma hierarquia em árvore dos elementos armazenados. Nessa hierarquia cada elemento do conjunto de entrada pode ser considerado um nó pai ou filho. Um modelo por animação dessa estrutura pode ser observada abaixo.
</p>

<p align="center">
	<img src="imgs/Heapsort-example.gif"/> 
</p> 

<div align="justify">

> Considerando a animação acima apresentada e dado um conjunto de elementos <b><e1, e2, . . . , en></b> tem-se que:
>
> - Os elementos filhos de um nó pai cuja a posição é i estarão armazenados nas posições 2i e 2i+1 do vetor e esses serão menores em valor do que o pai se estivermos tratando de um Max Heap ou o pai será o menor valor dentre eles se estivermos tratando de um Min Heap.
>
> - O elemento posicionado na primeira posição do Heap é chamado de elemento raiz e é sempre o maior elemento do conjunto.  

</div>