# Árvore Rubro-Negra esquerdista

São árvores binárias de busca que seguem as seguintes regras:

**1 -** Todo nó da árvore é vermelho ou preto.

**2 -** A raiz é preta.

**3 -** Se um nó é vermelho:

    - Seus dois filhos só podem ser pretos.

    - É filho esquerdo de um nó preto.

**4 -** Em cada nó, o caminho para qualquer uma de suas folhas possui a mesma quantidade de nós pretos.

**5 -** As folhas são NULL e tem cor preta.

<p align="center">
<img src="/assets/arvoreRubro.jpeg" width="450" />
</p>

## Inserção

A inserção ocorre da mesma forma que na árvore binária de busca, mas o nó é sempre inserido com a cor vermelha e depois há correção caso necessário.

## Problemas de inserção árvore

Ao inserir na árvore rubro-negra esquerdista, como o nó é sempre inserido como vermelho pode acabar quebrando as regras da árvore. Portanto precisamos corrigílos.

Problemas que podem ocorrer:

### 1 - Raiz com filho esquerdo preto e direito vermelho

**Solução:** rotação p/esquerda.

### 2 - Raiz com os dois filhos vermelhos

**Solução:** subida de cor.

### 3 - Raiz preta com filho esquerdo e neto esquerdo vermelho

**Solução:** rotação p/direita.

## Operações  de correção

Mostrarei as operações de correção citadas a cima como solução dos problemas.

### Rotação para esquerda

<p align="center">
<img src="/assets/rotacaoEsquerda.jpeg" width="450" />
</p>

### Rotação para direita

<p align="center">
<img src="/assets/rotacaoDireita.jpeg" width="450" />
</p>

### Subida de cor 

<p align="center">
<img src="/assets/subidaCor.jpeg" width="450" />
</p>

# Fila de Prioridades (Heap)

É uma estrutura de dados com duas operações básicas, inserir novo elemento e remover o com maior prioridade.

### Caracteristicas:

- É um tipo abstrato de dados
- Operações envolvem um grande volume de informações, que precisam de alguma ordenação, mas não precisam necessárimente estar totalmente ordenadas.

**Heap:**

- Inserção: **lg(n)**
- Remover Máx: **lg(n)**
- Remover X: **lg(n)**
- Encontrar Máx: **1**
- Mudar prioridade de X: **lg(n)**


**Ideia:**

Organizar as chaves como em uma árvore binária quase completa:
- Todos os níveis exceto o último estão cheios
- Os nós do último nível estão o mais a esquerda
possível
- Cada nó possui filhos com valores menores ou
iguais ao seu
- Raiz: a maior chave da heap
- Não ordena por completo, só garante-se que:
- Quanto mais próximo à raiz, maior a
prioridade

### Em vetor

- Raiz é o índice 0
- Pai de v[i] = v[(i-1)/2], para i>0.
- Filho esquerdo = v[i*2+1] <= n 
- Filho direito = v[i*2+2] <= n 

obs: n = número de nós da heap

<p align="center">
    <img width="400" src="/assets/heap.jpeg"> 
</p>

### Operações
Chave inserida
- Inserção nas folhas da heap
- Restauração: subindo na heap

Chave removida
- Raiz da heap é substituída por uma folha
- Restauração: descendo na heap

Inicialmente violam as condições da heap
- pai com maior valor que seus filhos

Posteriormente, as chaves são reorganizadas para
atender tais requisitos: restauração/conserto da heap

### **FixUp (sobe na Heap)**
- Sobe um nó com uma chave maior que seu pai
    - Troca de chave com seu
pai
- Recursivamente, sobe o nó
até um pai maior ou a
raiz

### **FixDown (desce na Heap)**
- Desce um nó com uma chave menor que um ou ambos os
filhos
    - Troca de chave com o
filho maior
- Recursivamente, desce o
nó até que ambos os
filhos sejam menores (ou
iguais) ou atingir a base

## Heap Sort

### Caracteristicas:

- Sua complexidade é cerca de ***2NlogN + 2N*** comparações
    - 2N na construção da heap
    - 2NlogN no conserto da heap (segunda fase)
- ***In-place***
- ***Não estável***
- Sobre ser adaptativo, Há uma redução das chamadas iterativas na construção
da heap (2N)

**Porém**, na ordenação final (segunda fase) não
contribui no fixDown dos elementos folhas (2N log N)
Complexidade: O(nlogn)

<p align="center">
    <img width="400" src="https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcRDWkGb1r8vmtfIAne749H2pIu4AR-hH_bPrze88nlclrUTp8VjawhdqFqqSrysw9gyKhQ&usqp=CAU"> 
</p>

<p align="center">
    <img width="400" src="https://saulo.arisa.com.br/wiki/images/0/05/Heap.png"> 
</p>