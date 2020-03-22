package model;

import javax.swing.JLabel;

public class Candidato {

    private Integer numero;
    private String nome;
    private JLabel foto;
    private Integer qtd_votos;

    public Candidato(Integer numero, String nome, JLabel foto) {
        this.numero = numero;
        this.nome = nome;
        this.foto = foto;
        this.qtd_votos = 0;
    }

    public Integer getNumero() {
        return numero;
    }

    public void setNumero(Integer numero) {
        this.numero = numero;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public JLabel getFoto() {
        return foto;
    }

    public void setFoto(JLabel foto) {
        this.foto = foto;
    }

    public Integer getQtd_votos() {
        return qtd_votos;
    }

    public void setQtd_votos(Integer qtd_votos) {
        this.qtd_votos = qtd_votos;
    }
    
}
