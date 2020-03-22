package view;

import controller.Controller;
import java.awt.Cursor;
import java.util.ArrayList;
import javax.swing.JOptionPane;
import model.Candidato;

public class Manter_candidatos extends javax.swing.JFrame {

    int corrente, nulo, branco;
    ArrayList<Candidato> candidatos = new ArrayList();
    Controller controller = new Controller();
    
    public Manter_candidatos(int corrente, int nulo, int branco, ArrayList<Candidato> candidatos) {
        initComponents();
        this.corrente = corrente;
        this.nulo = nulo;
        this.branco = branco;
        if(!controller.exibir_corrente(corrente, jLabel4))System.exit(0);
        if(corrente == 0)jLabel5.setText("CANDIDATOS (ABERTO)");
        else jLabel5.setText("CANDIDATOS (FECHADO)");
        this.candidatos = candidatos;
        controller.atualizar_tabela_candidatos(candidatos, jTable1);
    }
    
    public Manter_candidatos() {
        initComponents();
    }

    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jPanel1 = new javax.swing.JPanel();
        jPanel2 = new javax.swing.JPanel();
        jLabel1 = new javax.swing.JLabel();
        jPanel4 = new javax.swing.JPanel();
        botao_apuracao = new javax.swing.JLabel();
        botao_candidatos = new javax.swing.JLabel();
        botao_votacao = new javax.swing.JLabel();
        botao_home = new javax.swing.JLabel();
        jPanel7 = new javax.swing.JPanel();
        jLabel4 = new javax.swing.JLabel();
        botao_sair = new javax.swing.JLabel();
        jPanel3 = new javax.swing.JPanel();
        jLabel5 = new javax.swing.JLabel();
        jScrollPane1 = new javax.swing.JScrollPane();
        jTable1 = new javax.swing.JTable();
        botao_deletar = new javax.swing.JLabel();
        botao_inserir = new javax.swing.JLabel();
        botao_alterar = new javax.swing.JLabel();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        setUndecorated(true);
        setResizable(false);

        jPanel1.setBackground(new java.awt.Color(204, 204, 204));

        jPanel2.setBackground(new java.awt.Color(102, 102, 102));

        jLabel1.setFont(new java.awt.Font("Segoe UI", 1, 24)); // NOI18N
        jLabel1.setForeground(new java.awt.Color(255, 255, 255));
        jLabel1.setHorizontalAlignment(javax.swing.SwingConstants.CENTER);
        jLabel1.setText("Sistema de Eleição");

        jPanel4.setBackground(new java.awt.Color(112, 112, 112));

        botao_apuracao.setBackground(new java.awt.Color(255, 255, 255));
        botao_apuracao.setFont(new java.awt.Font("Segoe UI", 1, 14)); // NOI18N
        botao_apuracao.setForeground(new java.awt.Color(255, 255, 255));
        botao_apuracao.setText("Apuração dos Votos");
        botao_apuracao.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                botao_apuracaoMouseClicked(evt);
            }
            public void mouseEntered(java.awt.event.MouseEvent evt) {
                botao_apuracaoMouseEntered(evt);
            }
            public void mouseExited(java.awt.event.MouseEvent evt) {
                botao_apuracaoMouseExited(evt);
            }
        });

        botao_candidatos.setBackground(new java.awt.Color(255, 255, 255));
        botao_candidatos.setFont(new java.awt.Font("Segoe UI", 3, 14)); // NOI18N
        botao_candidatos.setForeground(new java.awt.Color(255, 255, 255));
        botao_candidatos.setText("Candidatos");
        botao_candidatos.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                botao_candidatosMouseClicked(evt);
            }
            public void mouseEntered(java.awt.event.MouseEvent evt) {
                botao_candidatosMouseEntered(evt);
            }
            public void mouseExited(java.awt.event.MouseEvent evt) {
                botao_candidatosMouseExited(evt);
            }
        });

        botao_votacao.setBackground(new java.awt.Color(255, 255, 255));
        botao_votacao.setFont(new java.awt.Font("Segoe UI", 1, 14)); // NOI18N
        botao_votacao.setForeground(new java.awt.Color(255, 255, 255));
        botao_votacao.setText("Ambiente de Votação");
        botao_votacao.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                botao_votacaoMouseClicked(evt);
            }
            public void mouseEntered(java.awt.event.MouseEvent evt) {
                botao_votacaoMouseEntered(evt);
            }
            public void mouseExited(java.awt.event.MouseEvent evt) {
                botao_votacaoMouseExited(evt);
            }
        });

        javax.swing.GroupLayout jPanel4Layout = new javax.swing.GroupLayout(jPanel4);
        jPanel4.setLayout(jPanel4Layout);
        jPanel4Layout.setHorizontalGroup(
            jPanel4Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, jPanel4Layout.createSequentialGroup()
                .addContainerGap(35, Short.MAX_VALUE)
                .addGroup(jPanel4Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                    .addComponent(botao_votacao, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.DEFAULT_SIZE, 225, Short.MAX_VALUE)
                    .addComponent(botao_candidatos, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                    .addComponent(botao_apuracao, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                .addContainerGap())
        );
        jPanel4Layout.setVerticalGroup(
            jPanel4Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel4Layout.createSequentialGroup()
                .addContainerGap()
                .addComponent(botao_candidatos, javax.swing.GroupLayout.PREFERRED_SIZE, 50, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(botao_votacao, javax.swing.GroupLayout.PREFERRED_SIZE, 50, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(botao_apuracao, javax.swing.GroupLayout.PREFERRED_SIZE, 50, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
        );

        botao_home.setIcon(new javax.swing.ImageIcon(getClass().getResource("/view/images/icone_home.png"))); // NOI18N
        botao_home.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                botao_homeMouseClicked(evt);
            }
            public void mouseEntered(java.awt.event.MouseEvent evt) {
                botao_homeMouseEntered(evt);
            }
            public void mouseExited(java.awt.event.MouseEvent evt) {
                botao_homeMouseExited(evt);
            }
        });

        jPanel7.setBackground(new java.awt.Color(112, 112, 112));
        jPanel7.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                jPanel7MouseClicked(evt);
            }
            public void mouseEntered(java.awt.event.MouseEvent evt) {
                jPanel7MouseEntered(evt);
            }
            public void mouseExited(java.awt.event.MouseEvent evt) {
                jPanel7MouseExited(evt);
            }
        });

        jLabel4.setFont(new java.awt.Font("Segoe UI", 3, 14)); // NOI18N
        jLabel4.setForeground(new java.awt.Color(51, 255, 0));

        javax.swing.GroupLayout jPanel7Layout = new javax.swing.GroupLayout(jPanel7);
        jPanel7.setLayout(jPanel7Layout);
        jPanel7Layout.setHorizontalGroup(
            jPanel7Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, jPanel7Layout.createSequentialGroup()
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                .addComponent(jLabel4, javax.swing.GroupLayout.PREFERRED_SIZE, 225, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addContainerGap())
        );
        jPanel7Layout.setVerticalGroup(
            jPanel7Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jLabel4, javax.swing.GroupLayout.DEFAULT_SIZE, 50, Short.MAX_VALUE)
        );

        javax.swing.GroupLayout jPanel2Layout = new javax.swing.GroupLayout(jPanel2);
        jPanel2.setLayout(jPanel2Layout);
        jPanel2Layout.setHorizontalGroup(
            jPanel2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jPanel4, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
            .addGroup(jPanel2Layout.createSequentialGroup()
                .addGap(90, 90, 90)
                .addComponent(botao_home)
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
            .addGroup(jPanel2Layout.createSequentialGroup()
                .addContainerGap()
                .addComponent(jLabel1, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                .addContainerGap())
            .addComponent(jPanel7, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
        );
        jPanel2Layout.setVerticalGroup(
            jPanel2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel2Layout.createSequentialGroup()
                .addGap(28, 28, 28)
                .addComponent(jLabel1)
                .addGap(18, 18, 18)
                .addComponent(botao_home)
                .addGap(18, 18, 18)
                .addComponent(jPanel7, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(18, 18, 18)
                .addComponent(jPanel4, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
        );

        botao_sair.setBackground(new java.awt.Color(153, 153, 153));
        botao_sair.setFont(new java.awt.Font("Segoe UI", 1, 24)); // NOI18N
        botao_sair.setForeground(new java.awt.Color(153, 153, 153));
        botao_sair.setHorizontalAlignment(javax.swing.SwingConstants.CENTER);
        botao_sair.setText("X");
        botao_sair.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                botao_sairMouseClicked(evt);
            }
            public void mouseEntered(java.awt.event.MouseEvent evt) {
                botao_sairMouseEntered(evt);
            }
            public void mouseExited(java.awt.event.MouseEvent evt) {
                botao_sairMouseExited(evt);
            }
        });

        jLabel5.setFont(new java.awt.Font("Segoe UI", 1, 48)); // NOI18N
        jLabel5.setForeground(new java.awt.Color(102, 102, 102));
        jLabel5.setText("CANDIDATOS");

        javax.swing.GroupLayout jPanel3Layout = new javax.swing.GroupLayout(jPanel3);
        jPanel3.setLayout(jPanel3Layout);
        jPanel3Layout.setHorizontalGroup(
            jPanel3Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, jPanel3Layout.createSequentialGroup()
                .addContainerGap(77, Short.MAX_VALUE)
                .addComponent(jLabel5, javax.swing.GroupLayout.PREFERRED_SIZE, 615, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addContainerGap())
        );
        jPanel3Layout.setVerticalGroup(
            jPanel3Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel3Layout.createSequentialGroup()
                .addContainerGap()
                .addComponent(jLabel5, javax.swing.GroupLayout.DEFAULT_SIZE, 128, Short.MAX_VALUE)
                .addContainerGap())
        );

        jTable1.setAutoCreateRowSorter(true);
        jTable1.setFont(new java.awt.Font("Segoe UI", 1, 18)); // NOI18N
        jTable1.setForeground(new java.awt.Color(102, 102, 102));
        jTable1.setModel(new javax.swing.table.DefaultTableModel(
            new Object [][] {

            },
            new String [] {
                "NÚMERO", "NOME"
            }
        ) {
            Class[] types = new Class [] {
                java.lang.String.class, java.lang.String.class
            };

            public Class getColumnClass(int columnIndex) {
                return types [columnIndex];
            }
        });
        jTable1.setGridColor(new java.awt.Color(255, 255, 255));
        jTable1.setIntercellSpacing(new java.awt.Dimension(5, 5));
        jTable1.setRowHeight(50);
        jScrollPane1.setViewportView(jTable1);
        if (jTable1.getColumnModel().getColumnCount() > 0) {
            jTable1.getColumnModel().getColumn(0).setResizable(false);
            jTable1.getColumnModel().getColumn(0).setPreferredWidth(3);
            jTable1.getColumnModel().getColumn(1).setResizable(false);
        }

        botao_deletar.setHorizontalAlignment(javax.swing.SwingConstants.CENTER);
        botao_deletar.setIcon(new javax.swing.ImageIcon(getClass().getResource("/view/images/icone_excluir.png"))); // NOI18N
        botao_deletar.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                botao_deletarMouseClicked(evt);
            }
            public void mouseEntered(java.awt.event.MouseEvent evt) {
                botao_deletarMouseEntered(evt);
            }
            public void mouseExited(java.awt.event.MouseEvent evt) {
                botao_deletarMouseExited(evt);
            }
        });

        botao_inserir.setHorizontalAlignment(javax.swing.SwingConstants.LEFT);
        botao_inserir.setIcon(new javax.swing.ImageIcon(getClass().getResource("/view/images/icone_adicionar.png"))); // NOI18N
        botao_inserir.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                botao_inserirMouseClicked(evt);
            }
            public void mouseEntered(java.awt.event.MouseEvent evt) {
                botao_inserirMouseEntered(evt);
            }
            public void mouseExited(java.awt.event.MouseEvent evt) {
                botao_inserirMouseExited(evt);
            }
        });

        botao_alterar.setHorizontalAlignment(javax.swing.SwingConstants.CENTER);
        botao_alterar.setIcon(new javax.swing.ImageIcon(getClass().getResource("/view/images/icone_atualizar.png"))); // NOI18N
        botao_alterar.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                botao_alterarMouseClicked(evt);
            }
            public void mouseEntered(java.awt.event.MouseEvent evt) {
                botao_alterarMouseEntered(evt);
            }
            public void mouseExited(java.awt.event.MouseEvent evt) {
                botao_alterarMouseExited(evt);
            }
        });

        javax.swing.GroupLayout jPanel1Layout = new javax.swing.GroupLayout(jPanel1);
        jPanel1.setLayout(jPanel1Layout);
        jPanel1Layout.setHorizontalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel1Layout.createSequentialGroup()
                .addComponent(jPanel2, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(18, 18, 18)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(jPanel1Layout.createSequentialGroup()
                        .addGap(0, 0, Short.MAX_VALUE)
                        .addComponent(botao_sair, javax.swing.GroupLayout.PREFERRED_SIZE, 30, javax.swing.GroupLayout.PREFERRED_SIZE))
                    .addGroup(jPanel1Layout.createSequentialGroup()
                        .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(jPanel3, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                            .addGroup(jPanel1Layout.createSequentialGroup()
                                .addComponent(jScrollPane1, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addGap(78, 78, 78)
                                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                                    .addComponent(botao_deletar, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                                    .addComponent(botao_inserir, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                                    .addComponent(botao_alterar, javax.swing.GroupLayout.PREFERRED_SIZE, 105, javax.swing.GroupLayout.PREFERRED_SIZE))))
                        .addContainerGap())))
        );
        jPanel1Layout.setVerticalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jPanel2, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
            .addGroup(jPanel1Layout.createSequentialGroup()
                .addComponent(botao_sair, javax.swing.GroupLayout.PREFERRED_SIZE, 28, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(44, 44, 44)
                .addComponent(jPanel3, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(jScrollPane1, javax.swing.GroupLayout.DEFAULT_SIZE, 320, Short.MAX_VALUE)
                    .addGroup(jPanel1Layout.createSequentialGroup()
                        .addGap(24, 24, 24)
                        .addComponent(botao_inserir)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(botao_alterar)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(botao_deletar)
                        .addGap(0, 0, Short.MAX_VALUE)))
                .addGap(52, 52, 52))
        );

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jPanel1, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jPanel1, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
        );

        setSize(new java.awt.Dimension(1000, 600));
        setLocationRelativeTo(null);
    }// </editor-fold>//GEN-END:initComponents

    private void botao_apuracaoMouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_botao_apuracaoMouseClicked
        // TODO add your handling code here:
        Apuracao_de_votos tela = new Apuracao_de_votos(corrente, nulo, branco, candidatos);
        tela.setVisible(true);
        this.setVisible(false);
    }//GEN-LAST:event_botao_apuracaoMouseClicked

    private void botao_apuracaoMouseEntered(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_botao_apuracaoMouseEntered
        // TODO add your handling code here:
        this.setCursor(Cursor.HAND_CURSOR);
    }//GEN-LAST:event_botao_apuracaoMouseEntered

    private void botao_apuracaoMouseExited(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_botao_apuracaoMouseExited
        // TODO add your handling code here:
        this.setCursor(Cursor.DEFAULT_CURSOR);
    }//GEN-LAST:event_botao_apuracaoMouseExited

    private void botao_candidatosMouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_botao_candidatosMouseClicked
        // TODO add your handling code here:
    }//GEN-LAST:event_botao_candidatosMouseClicked

    private void botao_candidatosMouseEntered(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_botao_candidatosMouseEntered
        // TODO add your handling code here:
        this.setCursor(Cursor.HAND_CURSOR);
    }//GEN-LAST:event_botao_candidatosMouseEntered

    private void botao_candidatosMouseExited(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_botao_candidatosMouseExited
        // TODO add your handling code here:
        this.setCursor(Cursor.DEFAULT_CURSOR);
    }//GEN-LAST:event_botao_candidatosMouseExited

    private void botao_votacaoMouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_botao_votacaoMouseClicked
        // TODO add your handling code here:
        Registrar_votos tela = new Registrar_votos(corrente, nulo, branco, candidatos);
        tela.setVisible(true);
        this.setVisible(false);
    }//GEN-LAST:event_botao_votacaoMouseClicked

    private void botao_votacaoMouseEntered(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_botao_votacaoMouseEntered
        // TODO add your handling code here:
        this.setCursor(Cursor.HAND_CURSOR);
    }//GEN-LAST:event_botao_votacaoMouseEntered

    private void botao_votacaoMouseExited(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_botao_votacaoMouseExited
        // TODO add your handling code here:
        this.setCursor(Cursor.DEFAULT_CURSOR);
    }//GEN-LAST:event_botao_votacaoMouseExited

    private void botao_homeMouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_botao_homeMouseClicked
        // TODO add your handling code here:
        Home tela = new Home(corrente, nulo, branco, candidatos);
        tela.setVisible(true);
        this.setVisible(false);
    }//GEN-LAST:event_botao_homeMouseClicked

    private void botao_homeMouseEntered(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_botao_homeMouseEntered
        // TODO add your handling code here:
        this.setCursor(Cursor.HAND_CURSOR);
    }//GEN-LAST:event_botao_homeMouseEntered

    private void botao_homeMouseExited(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_botao_homeMouseExited
        // TODO add your handling code here:
        this.setCursor(Cursor.DEFAULT_CURSOR);
    }//GEN-LAST:event_botao_homeMouseExited

    private void botao_sairMouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_botao_sairMouseClicked
        // TODO add your handling code here:
        System.exit(0);
    }//GEN-LAST:event_botao_sairMouseClicked

    private void botao_sairMouseEntered(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_botao_sairMouseEntered
        // TODO add your handling code here:
        this.setCursor(Cursor.HAND_CURSOR);
    }//GEN-LAST:event_botao_sairMouseEntered

    private void botao_sairMouseExited(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_botao_sairMouseExited
        // TODO add your handling code here:
        this.setCursor(Cursor.DEFAULT_CURSOR);
    }//GEN-LAST:event_botao_sairMouseExited

    private void botao_deletarMouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_botao_deletarMouseClicked
        // TODO add your handling code here:
        if(corrente == 0){
            if(jTable1.getSelectedRow() == -1){
                JOptionPane.showMessageDialog(this, "Selecione um candidato");
            }
            else{
                controller.deletar_candidato(candidatos, jTable1);
            }
        }
        else {
            JOptionPane.showMessageDialog(this, "O período de cadastramento encerrou");
        }
        
    }//GEN-LAST:event_botao_deletarMouseClicked

    private void botao_deletarMouseExited(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_botao_deletarMouseExited
        // TODO add your handling code here:
        this.setCursor(Cursor.DEFAULT_CURSOR);
    }//GEN-LAST:event_botao_deletarMouseExited

    private void botao_deletarMouseEntered(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_botao_deletarMouseEntered
        // TODO add your handling code here:
        this.setCursor(Cursor.HAND_CURSOR);
    }//GEN-LAST:event_botao_deletarMouseEntered

    private void botao_inserirMouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_botao_inserirMouseClicked
        // TODO add your handling code here:
        if(corrente == 0){
            Criar_candidato tela = new Criar_candidato(0, corrente, nulo, branco, candidatos, -1);
            tela.setVisible(true);
            this.setVisible(false);
        }
        else {
            JOptionPane.showMessageDialog(this, "O período de cadastramento encerrou");
        }
        
    }//GEN-LAST:event_botao_inserirMouseClicked

    private void botao_inserirMouseEntered(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_botao_inserirMouseEntered
        // TODO add your handling code here:
        this.setCursor(Cursor.HAND_CURSOR);
    }//GEN-LAST:event_botao_inserirMouseEntered

    private void botao_inserirMouseExited(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_botao_inserirMouseExited
        // TODO add your handling code here:
        this.setCursor(Cursor.DEFAULT_CURSOR);
    }//GEN-LAST:event_botao_inserirMouseExited

    private void botao_alterarMouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_botao_alterarMouseClicked
        // TODO add your handling code here:
        if(corrente == 0){
           if(jTable1.getSelectedRow() == -1){
                JOptionPane.showMessageDialog(this, "Selecione um candidato");
            }
            else{
                Criar_candidato tela = new Criar_candidato(1, corrente, nulo, branco, candidatos, jTable1.getSelectedRow());
                controller.deletar_candidato(candidatos, jTable1);
                tela.setVisible(true);
                this.setVisible(false);
            } 
        }
        else {
            JOptionPane.showMessageDialog(this, "O período de cadastramento encerrou");
        }
        
    }//GEN-LAST:event_botao_alterarMouseClicked

    private void botao_alterarMouseEntered(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_botao_alterarMouseEntered
        // TODO add your handling code here:
        this.setCursor(Cursor.HAND_CURSOR);
    }//GEN-LAST:event_botao_alterarMouseEntered

    private void botao_alterarMouseExited(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_botao_alterarMouseExited
        // TODO add your handling code here:
        this.setCursor(Cursor.DEFAULT_CURSOR);
    }//GEN-LAST:event_botao_alterarMouseExited

    private void jPanel7MouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_jPanel7MouseClicked
        // TODO add your handling code here:
        corrente++;
        Manter_candidatos tela = new Manter_candidatos(corrente, nulo, branco, candidatos);
        tela.setVisible(true);
        this.setVisible(false);
    }//GEN-LAST:event_jPanel7MouseClicked

    private void jPanel7MouseEntered(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_jPanel7MouseEntered
        // TODO add your handling code here:
        this.setCursor(Cursor.HAND_CURSOR);
    }//GEN-LAST:event_jPanel7MouseEntered

    private void jPanel7MouseExited(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_jPanel7MouseExited
        // TODO add your handling code here:
        this.setCursor(Cursor.DEFAULT_CURSOR);
    }//GEN-LAST:event_jPanel7MouseExited

    public static void main(String args[]) {
        //<editor-fold defaultstate="collapsed" desc=" Look and feel setting code (optional) ">
        /* If Nimbus (introduced in Java SE 6) is not available, stay with the default look and feel.
         * For details see http://download.oracle.com/javase/tutorial/uiswing/lookandfeel/plaf.html 
         */
        try {
            for (javax.swing.UIManager.LookAndFeelInfo info : javax.swing.UIManager.getInstalledLookAndFeels()) {
                if ("Nimbus".equals(info.getName())) {
                    javax.swing.UIManager.setLookAndFeel(info.getClassName());
                    break;
                }
            }
        } catch (ClassNotFoundException ex) {
            java.util.logging.Logger.getLogger(Manter_candidatos.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(Manter_candidatos.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(Manter_candidatos.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(Manter_candidatos.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new Manter_candidatos().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JLabel botao_alterar;
    private javax.swing.JLabel botao_apuracao;
    private javax.swing.JLabel botao_candidatos;
    private javax.swing.JLabel botao_deletar;
    private javax.swing.JLabel botao_home;
    private javax.swing.JLabel botao_inserir;
    private javax.swing.JLabel botao_sair;
    private javax.swing.JLabel botao_votacao;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JLabel jLabel3;
    private javax.swing.JLabel jLabel4;
    private javax.swing.JLabel jLabel5;
    private javax.swing.JPanel jPanel1;
    private javax.swing.JPanel jPanel2;
    private javax.swing.JPanel jPanel3;
    private javax.swing.JPanel jPanel4;
    private javax.swing.JPanel jPanel5;
    private javax.swing.JPanel jPanel6;
    private javax.swing.JPanel jPanel7;
    private javax.swing.JScrollPane jScrollPane1;
    private javax.swing.JTable jTable1;
    // End of variables declaration//GEN-END:variables

}
