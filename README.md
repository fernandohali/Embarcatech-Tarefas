# Conversor de Unidades em Linguagem C

Este projeto consiste na implementação de um programa **Conversor de Unidades** utilizando a linguagem de programação **C**. O foco é a prática de conceitos de **versionamento** com **Git** e **GitHub**, além do desenvolvimento colaborativo em equipe.

---

## 🚀 Objetivo

- Simular um fluxo de trabalho real com **versionamento** e **colaboração**.
- Implementar funcionalidades de conversão de diferentes tipos de unidades (comprimento, massa, volume, temperatura, etc.).
- Desenvolver habilidades práticas no uso de **Git** e **GitHub**.

---

## 📋 Funcionalidades Implementadas

As principais conversões disponíveis no programa são:

1. **Comprimento**: Metro ↔ Centímetro ↔ Milímetro  
2. **Massa**: Quilograma ↔ Grama ↔ Tonelada  
3. **Volume**: Litro ↔ Mililitro ↔ Metro cúbico  
4. **Temperatura**: Celsius ↔ Fahrenheit ↔ Kelvin  
5. **Velocidade**: km/h ↔ m/s ↔ mph  
6. **Energia**: Watts (W) ↔ Quilowatts (kW) ↔ Cavalos-vapor (cv ou hp)  
7. **Área**: Metro quadrado ↔ Centímetro quadrado  
8. **Tempo**: Segundos ↔ Minutos ↔ Horas  
9. **Dados**: Bits ↔ Bytes ↔ KB ↔ MB ↔ GB ↔ TB  

---

## 🛠️ Como Executar o Projeto

1. **Clonar o Repositório**:  
   ```bash
   git clone https://github.com/seu-usuario/nome-do-repositorio.git
   cd nome-do-repositorio
   ```

2. **Compilar o Código**:  
   Utilize um compilador de C como `gcc`. Exemplo:  
   ```bash
   gcc main.c -o conversor
   ```

3. **Executar o Programa**:  
   ```bash
   ./conversor
   ```

---

## 💻 Estrutura do Projeto

```
├── main.c                 # Arquivo principal do programa
├── funcoes/               # Pasta com funções específicas de conversão
│   ├── comprimento.c
│   ├── massa.c
│   ├── temperatura.c
│   ├── ...
│   └── funcoes.h
├── README.md              # Documentação do projeto
└── testes/                # Testes e validação do programa
```

---

## 🚦 Fluxo de Trabalho com Git

1. **Inicialização do Repositório**:  
   O líder inicializa o repositório e configura a estrutura inicial.

2. **Criação de Branchs**:  
   Cada desenvolvedor cria sua branch:  
   ```bash
   git checkout -b feature/nome-da-tarefa
   ```

3. **Commits**:  
   Faça commits regulares com mensagens descritivas:  
   ```bash
   git add .
   git commit -m "Implementação da conversão de comprimento"
   ```

4. **Pull Requests e Revisão**:  
   - Envie as mudanças para o GitHub com pull requests.  
   - O líder revisa e aprova os pull requests.  
   - Conflitos são resolvidos e as mudanças são integradas.

---

## ✅ Testes

- Foram implementados testes básicos para validar as conversões de cada unidade.  
- Execute o programa e verifique os valores de saída.

---

## 📚 Comandos Git Úteis

- **Inicializar o repositório**:  
   ```bash
   git init
   ```

- **Criar uma branch**:  
   ```bash
   git checkout -b feature/nome
   ```

- **Fazer commit**:  
   ```bash
   git commit -m "mensagem"
   ```

- **Enviar mudanças**:  
   ```bash
   git push origin nome-branch
   ```

- **Atualizar repositório local**:  
   ```bash
   git pull origin main
   ```

---

## 👥 Equipe de Desenvolvimento

- **Líder**: *Fernando Hali Santos Andrade*  
- **Desenvolvedores**:
   - *Desenvolvedor 1*: Implementação de Comprimento  
   - *Desenvolvedor 2*: Implementação de Massa  
   - *Desenvolvedor 3*: Implementação de Volume  
   - *Desenvolvedor 4*: Implementação de Temperatura  
   - *Desenvolvedor 5*: Implementação de Velocidade  
   - *Desenvolvedor 6*: Implementação de Energia  
   - *Desenvolvedor 7*: Implementação de Área  
   - *Desenvolvedor 8*: Implementação de Tempo  
   - *Desenvolvedor 9*: Implementação de Dados  

---
