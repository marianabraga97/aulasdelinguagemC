# Exercício 37 - Análise e Gerenciamento de Funcionários em C

Projeto desenvolvido como parte das atividades práticas de Algoritmos e Programação no **Instituto Federal de Educação, Ciência e Tecnologia de São Paulo (IFSP) – Campus Bragança Paulista**.

## 📌 Descrição do Problema
O programa tem como objetivo cadastrar $n$ funcionários de uma empresa, registrando para cada um:
- **Departamento** (`A` ou `B`)
- **Sexo** (`M` ou `F`)
- **Idade** (anos)
- **Salário** (R$)

Após a coleta e validação das entradas, o sistema processa e exibe relatórios detalhados com base em diferentes critérios e filtros condicionais.

---

## 🚀 Funcionalidades e Relatórios Gerados
1. **Validação de Entradas:**
   - Garantia de quantidade válida de funcionários ($n > 0$).
   - Tratamento de entradas para departamento (`A`/`B`), sexo (`M`/`F`), idade e salário.
2. **Filtragem e Relatórios:**
   - Listagem de funcionárias do sexo feminino.
   - Listagem de funcionários do sexo masculino.
   - Listagem de funcionários por departamento (`A` e `B`).
   - Cálculo e exibição da **Média Salarial Geral**.
   - Funcionários com salário acima da média geral.
   - Funcionários do Departamento B com salário acima da média geral.
3. **Métricas de Extremos:**
   - Identificação do **maior salário global** e seus dados.
   - Identificação do **menor salário do Departamento A** e seus dados.
   - Soma total das folhas de pagamento por departamento.

---

## 🛠️ Conceitos Aplicados
- **Linguagem C** (`stdio.h`)
- **Estruturas de Repetição:** `for` (iteração) e `while` (validação de entrada)
- **Estruturas Condicionais:** `if`, `else if`, operadores lógicos (`&&`, `||`)
- **Vetores Paralelos (VLA):** Armazenamento dinâmico baseado na quantidade de funcionários informada
- **Busca de Extremos:** Mapeamento de índices (`pos_maior`, `pos_menorA`) para rastreamento de registros

---

## 📂 Como Executar o Projeto

1. **Clone o repositório:**
   ```bash
   git clone [https://github.com/marianabraga97/aulaslingugagemC.git](https://github.com/marianabraga97/aulaslingugagemC.git)
