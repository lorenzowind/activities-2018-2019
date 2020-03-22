package model;

public class Voto {
    
    private Integer numero_candidato;
    private String nome;

    public Voto(Integer numero_candidato, String nome) {
        this.numero_candidato = numero_candidato;
        this.nome = nome;
    }
    
    public Integer getNumero_candidato() {
        return numero_candidato;
    }

    public void setNumero_candidato(Integer numero_candidato) {
        this.numero_candidato = numero_candidato;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }
    
}
