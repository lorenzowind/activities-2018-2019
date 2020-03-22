package controller;

import java.util.ArrayList;
import javax.swing.JLabel;
import javax.swing.JTable;
import javax.swing.table.DefaultTableModel;
import model.Candidato;

public class Controller {

    public boolean inserir_candidato(ArrayList<Candidato> candidatos, int numero, String nome, JLabel imagem){
        if(numero == -1)return false;
        for(Candidato i : candidatos)if(i.getNumero() == numero)return false;
        Candidato candidato = new Candidato(numero, nome, imagem);
        candidatos.add(candidato);
        return true;
    }
    
    public void atualizar_tabela_candidatos(ArrayList<Candidato> candidatos, JTable tabela){
        DefaultTableModel model = (DefaultTableModel)tabela.getModel();
        for(Candidato i : candidatos){
            model.addRow(new Object[]{i.getNumero(),i.getNome()});
        }
        tabela.setModel(model);
    }
    
    public void deletar_candidato(ArrayList<Candidato> candidatos, JTable tabela){
        candidatos.remove(tabela.getSelectedRow());
        DefaultTableModel model = (DefaultTableModel)tabela.getModel();
        model.removeRow(tabela.getSelectedRow());
        tabela.setModel(model);
    }
    
    public boolean exibir_corrente(int corrente, JLabel texto){
        switch (corrente) {
            case 0:texto.setText("ENCERRAR CADASTRAMENTO");break;
            case 1:texto.setText("ENCERRAR VOTAÇÃO");break;
            case 2:texto.setText("ENCERRAR ELEIÇÃO");break;
            default:break;
        }
        if(corrente == 3)return false;
        return true;
    }
    
    public boolean buscar_candidato(ArrayList<Candidato> candidatos, int numero, JLabel foto, JLabel nome){
        for(Candidato i : candidatos){
            if(i.getNumero() == numero){
                foto.setIcon(i.getFoto().getIcon());
                nome.setText(i.getNome());
                return true;
            }
        }
        return false;
    }
    
    public void inserir_voto(ArrayList<Candidato> candidatos, int numero){
        for(Candidato i : candidatos){
            if(i.getNumero() == numero){
                i.setQtd_votos(i.getQtd_votos()+1);
            }
        }
    }
    
    public void atualizar_tabela_apuracao(ArrayList<Candidato> candidatos, int votos_nb, JTable tabela){
        DefaultTableModel model = (DefaultTableModel) tabela.getModel();
        int votos = votos_nb;
        for(Candidato i : candidatos){
            votos += i.getQtd_votos();
        }
        for(Candidato i : candidatos){
            String numero = Integer.toString(i.getNumero());
            String pct = Double.toString((double)(i.getQtd_votos()*100)/votos);
            model.addRow(new Object[]{numero, i.getNome(), i.getQtd_votos(), pct});
        }
        tabela.setModel(model);
    }
}
