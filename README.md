# Registro de Dados em C 📊

Este programa em C permite a adição e visualização de registros de dados armazenados em um arquivo binário. Cada registro contém um ID, um valor numérico e um nome, proporcionando uma maneira simples de gerenciar informações.

## Funcionalidades ✨

- **Adicionar Novo Registro** ➕: Insira um novo registro com um ID, um valor e um nome. Os dados são salvos em um arquivo binário.
  
- **Visualizar Registros Existentes** 📄: Leia os registros já armazenados e exiba-os na tela.

- **Saída do Programa** 🚪: Saia do programa a qualquer momento.

## Estrutura de Dados 🗂️

O programa utiliza uma estrutura chamada `Registro`, que contém os seguintes campos:

- **ID**: Um identificador único para cada registro.
- **Valor**: Um número do tipo `float` associado ao registro.
- **Nome**: Uma string que armazena o nome (até 49 caracteres).

## Como Usar 🛠️

1. Compile o código em um ambiente que suporte C.
2. Execute o programa.
3. Siga as instruções apresentadas no menu para adicionar registros ou visualizar os já existentes.
4. Para sair, escolha a opção correspondente.

## Observações ⚠️

- Os registros são armazenados em um arquivo chamado `registros.dat`.
- Certifique-se de que o programa tenha permissão para criar e escrever arquivos no diretório onde está sendo executado.
- O programa exibe mensagens de erro caso ocorra algum problema ao abrir o arquivo.


