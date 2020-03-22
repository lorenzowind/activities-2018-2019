package CalculadoraCientificaApplication;

import javax.swing.JButton;
import javax.swing.JLabel;

/**
 * @author Lorenzo Windmoller
 */
public final class Calculadora_cientifica {

    public class Numero{
        
        private Double m = 0.0;
        /**
         * Metodo que incrementa valores e armazena
         */
        public void mp(){
            m += n;
        }
        /**
         * Metodo que decrementa valores e armazena
         */
        public void mm(){
            m -= n;
        }
        /**
         * Metodo que zera os valores armazenados
         */
        public void mc(){
            m = 0.0;
        }
        /**
         * Metodo que mostra o resultado das operacoes e numeros anteriormente armazenados
         */
        public void mr(){
            n = m;
            convert();
        }
        /**
         * Metodo que inverte o sinal do numero 
         */
        public void troca_sinal(){
            String n1 = "";
            if(n>0)n1 = "-";
            else n = Math.abs(n);
            n1 += Double.toString(n);
            n = Double.parseDouble(n1);
            convert();
        }
        /**
         * Metodo que gera um numero aleatorio
         */
        public void rand(){
            n = Math.random();
            convert();
        }
        /**
         * Metodo que atribui o numero de napier
         */
        public void napier(){
            n = Math.E;
            convert();
        }
        /**
         * Metodo que atribui o pi
         */
        public void pi(){
            n = Math.PI;
            convert();
        }
        /**
         * Metodo que eleva o numero ao quadrado
         */
        public void pot_2(){
            n = Math.pow(n, 2);
            convert();
        } 
        /**
         * Metodo que eleva o numero ao cubo
         */
        public void pot_3(){
            n = Math.pow(n, 3);
            convert();
        }
        /**
         * Metodo que eleva 2 a um numero digitado
         */
        public void pot2n(){
            n = Math.pow(2, n);
            convert();
        }
        /**
         * Metodo que eleva 10 a um numero digitado
         */
        public void pot10n(){
            n = Math.pow(10, n);
            convert();
        }
        /**
         * Metodo que eleva o numero de napier a um numero digitado
         */
        public void napier_pot(){
            n = Math.pow(Math.E, n);
            convert();
        }
        /**
         * Metodo que calcula o fatorial de um numero digitado
         */
        public void fat(){
            Double x = 1.0;
            for(int i=1;i<=n;i++)x *= i;
            n = x;
            convert();
        }
        /**
         * Metodo que calcula o logaritmo de um numero digitado na base 2
         */
        public void log2(){
            n = (Math.log10(n)/Math.log10(2));
            convert();
        }
        /**
         * Metodo que calcula o logaritmo de um numero digitado na base 10
         */
        public void log10(){
            n = Math.log10(n);
            convert();
        }
        /**
         * Metodo que calcula o logaritmo natural de um numero digitado
         */
        public void ln(){
            n = Math.log(n);
            convert();
        }
        /**
         * Metodo que calcula a divisao de 1 por um numero digitado
         */
        public void div1(){
            n = (double)1/n;
            convert();
        }
        /**
         * Metodo que calcula a raiz quadrada de um numero digitado
         */
        public void raizq(){
            n = Math.sqrt(n);
            convert();
        }
        /**
         * Metodo que calcula a raiz cubica de um numero digitado
         */
        public void raizc(){
            n = Math.cbrt(n);
            convert();
        }
        /**
         * Metodo que calcula o arco seno de um numero digitado, em graus ou radianos
         */
        public void arcsen(){
            if(rad)n = 1/Math.sin(n);
            else n = 1/Math.sin(Math.toRadians(n));
            convert();
        }
        /**
         * Metodo que calcula o seno de um numero digitado, em graus ou radianos
         */
        public void sen(){
            if(rad)n = Math.sin(n);
            else n = Math.sin(Math.toRadians(n));
            convert();
        }
        /**
         * Metodo que calcula o arco cosseno de um numero digitado, em graus ou radianos
         */
        public void arccos(){
            if(rad)n = 1/Math.cos(0);
            else n = 1/Math.cos(Math.toRadians(n));
            convert();
        }
        /**
         * Metodo que calcula o cosseno de um numero digitado, em graus ou radianos
         */
        public void cos(){
            if(rad)n = Math.cos(n);
            else n = Math.cos(Math.toRadians(n));
            convert();
        }
        /**
         * Metodo que calcula o arco tangente de um numero digitado, em graus ou radianos
         */
        public void arctan(){
            if(rad)n = 1/Math.tan(0);
            else n = 1/Math.tan(Math.toRadians(n));
            convert();
        }
        /**
         * Metodo que calcula a tangente de um numero digitado, em graus ou radianos
         */
        public void tan(){
            if(rad)n = Math.tan(n);
            else n = Math.tan(Math.toRadians(n));
            convert();
        }
        /**
         * Metodo que calcula o arco seno hiperbolico de um numero digitado, em graus ou radianos
         */
        public void arcsenh(){
            if(rad)n = 1/Math.sinh(n);
            else n = 1/Math.sinh(Math.toRadians(n));
            convert();
        }
        /**
         * Metodo que calcula o seno hiperbolico de um numero digitado, em graus ou radianos
         */
        public void senh(){
            if(rad)n = Math.sinh(n);
            else n = Math.sinh(Math.toRadians(n));
            convert();
        }
        /**
         * Metodo que calcula o arco cosseno hiperbolico de um numero digitado, em graus ou radianos
         */
        public void arccosh(){
            if(rad)n = 1/Math.cosh(n);
            else n = 1/Math.cosh(Math.toRadians(n));
            convert();
        }
        /**
         * Metodo que calcula o cosseno hiperbolico de um numero digitado, em graus ou radianos
         */
        public void cosh(){
            if(rad)n = Math.cosh(n);
            else n = Math.cosh(Math.toRadians(n));
            convert();
        }
        /**
         * Metodo que calcula o arco tangente hiperbolico de um numero digitado, em graus ou radianos
         */
        public void arctanh(){
            if(rad)n = 1/Math.tanh(n);
            else n = 1/Math.tanh(Math.toRadians(n));
            convert();
        }
        /**
         * Metodo que calcula a tangente hiperbolica de um numero digitado, em graus ou radianos
         */
        public void tanh(){
            if(rad)n = Math.tanh(n);
            else n = Math.tanh(Math.toRadians(n));
            convert();
        }
        /**
         * Metodo que calcula a porcentagem em 100 de um numero digitado
         */
        public void percent(){
            n /= 100;
            convert();
        }
        /**\
         * Metodo que concatena os parenteses
         * @param s - representa o parentese, sendo de abertura ou fechamento
         */
        public void parent(char s){
            String aux = text.getText();
            text.setText(aux + s);
        }
        /**
         * Metodo que "limpa" os valores digitados
         */
        public void ac(){
            limpar();
            text.setText("0");
            visibilidade();
        }
        /**
         * Metodo que converte os numeros anteriormente tratados em String
         */
        public void convert(){
            try{
                if(n == Double.NEGATIVE_INFINITY || n == Double.POSITIVE_INFINITY){
                    throw new RuntimeException();
                }
                digitado = Double.toString(n);
            }
            catch(RuntimeException e){
                digitado = "Erro";
            }
            text.setText(digitado);
        }
    }
    
    public JLabel text;
    public JButton div,adi,mult,sub,igual;
    public JLabel degrad;
    boolean rad = true;
    
    private String digitado = "";
    private String numero = "";
    private Double n = 0.0;
    private boolean new_op = false;
    private boolean op = false;
    private boolean calc = false;
    private boolean num2 = false;
    
    public Numero numero_operacao = new Numero();
    
    /**
     * Construtor que inicializa os componentes da interface grafica que serao posteriormente utilizados
     * @param text - JLabel que armazena os numeros digitados
     * @param div - JButton da operacao de divisao
     * @param adi - JButton da operacao de adicao
     * @param mult - JButton da operacao de multiplicacao
     * @param sub - JButton da operacao de subtracao
     * @param igual - JButton da operacao de igualdade, "calcular e gerar resultado"
     * @param degrad  - JButton da abordagem do numero, sendo tratado em graus ou radianos
     */
    public Calculadora_cientifica(JLabel text, JButton div, JButton adi, JButton mult, JButton sub, JButton igual, JLabel degrad) {
        this.text = text;
        this.div = div;
        this.adi = adi;
        this.mult = mult;
        this.sub = sub;
        this.igual = igual;
        this.degrad = degrad;
        visibilidade();
    }
    
    /**
     * Metodo que trata a visibilidade dos botoes conforme a requisicao e a necessidade de uso
     */
    public void visibilidade(){
        boolean vis = false;
        if(!"".equals(digitado))vis = true;
        div.setEnabled(vis);
        adi.setEnabled(vis);
        mult.setEnabled(vis);
        sub.setEnabled(vis);
        igual.setEnabled(calc);
    }
     
    /**
     * Metodo que reinicializa as variaveis para serem novamente utilizadas
     */
    public void limpar(){
        calc = op = false;
        numero = digitado = "";
        n = 0.0;
    }
    
    /**
     * Metodo que verifica se determinado caracter e um sinal, para possibiliar a realizacao da operacao
     * @param s - String contendo o sinal digitado
     * @return Boolean - se o caracter for um sinal, true, senao, false
     */
    public boolean sinal(String s){
        switch(s){
            case "+": return true;
            case "-": return true;
            case "x": return true;
            case "/": return true; 
            case "x^y": return true;
            case "y√x": return true;
            case "logy": return true; 
            case "EE": return true;
            
            case "^": return true;
            case "√": return true;
            case "E": return true;
            case "o": return true;
        }
        return false;
    }
    
    /**
     * Metodo que concatena e armazena os numeros e os sinais digitados, armazenando assim, toda e qualquer informacao de entrada
     * @param btn JButton - componente que se refere a entrada do usuario, obtendo o conteudo a partir do texto nele armazenado 
     */
    public void operation(JButton btn){
        try{
        if(op)num2 = true;
        if(sinal(btn.getText())){
            String sinal;
            if(btn.getText().length() > 1)sinal = Character.toString(btn.getText().charAt(1));
            else sinal = Character.toString(btn.getText().charAt(0));
            numero += digitado;
            if(op)digitado = resultado();
            numero = digitado + sinal;
            op = true;
            new_op = true;
        }
        else if("".equals(digitado) && !sinal(btn.getText())){
            digitado = btn.getText();
            calc = true;
        }
        else digitado += btn.getText();
        text.setText(digitado);
        n = Double.parseDouble(digitado);
        if(new_op)digitado = "";
        visibilidade();
        new_op = false;
        if(n == Double.NEGATIVE_INFINITY || n == Double.POSITIVE_INFINITY){
            throw new RuntimeException();
        }
        }
        catch(RuntimeException e){
            digitado = "Erro";
        }
    }

    
    /**
     * Metodo inicial que trata o calculo requerido pelo usuario
     */
    public void calcular(){
        numero += digitado;
        if("".equals(digitado) && numero.length() == 0)numero = "0";
        else if(!"".equals(digitado))numero = resultado();
        if(sinal(Character.toString(numero.charAt(numero.length()-1))))numero=numero.substring(0,numero.length()-1);
        text.setText(numero);
        limpar();
        visibilidade();
    }
    
    /**
     * Metodo que realiza o calculo dos numeros armazenados, tratando internamente, apenas dois numeros
     * @return String - contem o resultado em formato de string
     */
    public String resultado(){
        String n1,n2,sinal,result;
        n1 = n2 = sinal = result = "";
        try{
        if(num2){
            boolean prox = false;
            for(int i=0;i<numero.length();i++){
                if(i>0){
                    if(sinal(Character.toString(numero.charAt(i)))){
                        sinal = Character.toString(numero.charAt(i));
                        prox = true;
                        i++;
                    }
                }
                if(!prox)n1 += numero.charAt(i);
                else n2 += numero.charAt(i);
            }
            switch(sinal){
                case "+":
                    result = Double.toString(Double.parseDouble(n1) + Double.parseDouble(n2));
                    break;
                case "-":
                    result = Double.toString(Double.parseDouble(n1) - Double.parseDouble(n2));
                    break;
                case "/":
                    result = Double.toString(Double.parseDouble(n1) / Double.parseDouble(n2));
                    break;
                case "x":
                    result = Double.toString(Double.parseDouble(n1) * Double.parseDouble(n2));
                    break;
                case "^":
                    result = Double.toString(Math.pow(Double.parseDouble(n1),Double.parseDouble(n2)));
                    break;
                case "E":
                    result = Double.toString(Double.parseDouble(n1) * Math.pow(10,Double.parseDouble(n2)));
                    break;
                case "√":
                    result = Double.toString(Math.pow(Double.parseDouble(n1), 1/Double.parseDouble(n2)));
                    break;
                case "o":
                    result = Double.toString(Math.log10(Double.parseDouble(n1))/Math.log10(Double.parseDouble(n2)));
            }
            if(Double.parseDouble(result) == Double.NEGATIVE_INFINITY || Double.parseDouble(result) == Double.POSITIVE_INFINITY){
                throw new RuntimeException();
            }
        }
        else result = numero;
        }
        catch(RuntimeException e){
            result = "Erro";
        }
        return result;
    }
    
    /**
     * Metodo que verifica a abordagem em que os numeros serao tratados, podendo ser em graus ou radianos
     */
    public void degrad(){
        if(rad)degrad.setText("Deg");
        else degrad.setText("Rad");
        rad = !rad;
    }
    
}
