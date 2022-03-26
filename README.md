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
Em literatura, há diferentes maneiras de se implementar o Heap Sort, as mais comums utilizam filas de prioridade e/ou heaps para representar sua estrutura interna. As filas de prioridade são comuns em Sistemas Operacionais e apresentam, dentre suas funções, a capacidade de mapear o tempo de execução de processos, rastrear páginas em memória a serem substituídas e gerenciar processos. Como Heap, assumem funções generalistas e podem ser aplicadas nos mais diversos problemas que envolvam ordenação. Vejamos a seguir os custos envolvidos com ambas as estruturas de apoio. 
</p>

$\pi \approx 3.14159$

| Custo           |  LP Ordenada            | LP não Ordenada         | Heap                    |
|:----------------|:-----------------------:|:-----------------------:|:-----------------------:|
| Construção      | $\mathcal{O}(n\log{}n)$ | $\mathcal{O}(n)$        | $\mathcal{O}(n)$        |
| Inserção        | $\mathcal{O}(n)$        | $\mathcal{O}(1)$        | $\mathcal{O}(n\log{}n)$ |
| Remoção         | $\mathcal{O}(1)$        | $\mathcal{O}(n)$        | $\mathcal{O}(n\log{}n)$ | 
| União (ponteiro)| $\mathcal{O}(n)$        | $\mathcal{O}(1)$        | $\mathcal{O}(n\log{}n)$ |
| União (vetor)   | $\mathcal{O}(n)$        | $\mathcal{O}(n)$        | $\mathcal{O}(n\log{}n)$ |