Dígito verificador ou algarismo de controle é um mecanismo de autenticação utilizado para verificar a validade e a autenticidade de um valor numérico, evitando dessa forma fraudes ou erros de transmissão ou digitação.

Consiste em um ou mais algarismos acrescentados ao valor original e calculados a partir deste através de um determinado algoritmo. Números de documentos de identificação, de matrícula, cartões de crédito e quaisquer outros códigos numéricos que necessitem de maior segurança utilizam dígitos verificadores. Esse trabalho consiste em calcular o dígito verificador do CPF. Seu programa deve receber um cpf sem o dígito verificar e imprimir o cpf com o dígito verificador. Você pode usar o seu cpf e de parentes e colegas para testar o programa. A seguir, as regras para o cálculo do dígito verificador são definidas através de um exemplo. É utilizado como exemplo o número: 123456789. 

1. Calcule a soma dos produtos dos nove dígitos utilizando peso dois para unidade, peso 3 para dezena, peso 4 para centena e assim sucessivamente. Exemplo: 9*2+8*3+7*4+6*5+5*6+4*7+3*8+2*9+1*10 = 210

2. A dezena do número verificador é 0 caso o resto da divisão por 11 da soma dos produtos seja 0 ou 1; caso contrário a dezena corresponde  a subtrair de 11 o resto da divisão por 11 da soma dos produtos. Exemplo resto da divisão de 210 por 11 é 1 então a dezena do número verificador é 0. 

3. Calcule a soma dos produtos dos dez dígitos, onde o dígito menos significativo passa a ser a dezena dos dígitos verificadores, utilizando os seguintes pesos: 2, 3, 4, 5, 6, 7, 8, 9, 10, 11; Exemplo: 2*0+3*9+4*8+5*7+6*6+7*5+8*4+9*3+10*2+11*1=255. 

4. A unidade do número verificador é 0 caso o resto da divisão da soma dos produtos seja 0 ou 1; caso contrário a unidade corresponde a 11 menos o resto da divisão por 11 da soma dos produtos. Exemplo: O resto da divisão de 255 por 11 é 2, então a unidade do número verificador é 11-2=9.
