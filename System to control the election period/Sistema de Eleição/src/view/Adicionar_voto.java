package view;

import controller.Controller;
import java.awt.Cursor;
import java.awt.Toolkit;
import java.util.ArrayList;
import model.Candidato;

public class Adicionar_voto extends javax.swing.JFrame {

    int corrente, nulo, branco;
    ArrayList<Candidato> candidatos = new ArrayList();
    Controller controller = new Controller();

    public Adicionar_voto(int nulo, int branco, int corrente, ArrayList<Candidato> candidatos){
        initComponents();
        this.corrente = corrente;
        this.nulo = nulo;
        this.branco = branco;
        this.candidatos = candidatos;
        jLabel4.setVisible(false);
        imagem.setVisible(false);
        jPanel2.setVisible(false);
    }
    
    public Adicionar_voto() {
        initComponents();
    }

    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jPanel1 = new javax.swing.JPanel();
        jLabel1 = new javax.swing.JLabel();
        botao_foto = new javax.swing.JPanel();
        jLabel2 = new javax.swing.JLabel();
        jLabel3 = new javax.swing.JLabel();
        botao_inserir = new javax.swing.JPanel();
        jLabel5 = new javax.swing.JLabel();
        numero = new javax.swing.JTextField();
        jPanel2 = new javax.swing.JPanel();
        imagem = new javax.swing.JLabel();
        jLabel4 = new javax.swing.JLabel();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        setUndecorated(true);
        setResizable(false);

        jPanel1.setBackground(new java.awt.Color(153, 153, 153));
        jPanel1.setLayout(null);

        jLabel1.setFont(new java.awt.Font("Segoe UI", 1, 48)); // NOI18N
        jLabel1.setForeground(new java.awt.Color(255, 255, 255));
        jLabel1.setHorizontalAlignment(javax.swing.SwingConstants.CENTER);
        jLabel1.setText("Voto");
        jPanel1.add(jLabel1);
        jLabel1.setBounds(10, 10, 480, 64);

        botao_foto.setBackground(new java.awt.Color(102, 102, 102));
        botao_foto.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                botao_fotoMouseClicked(evt);
            }
            public void mouseEntered(java.awt.event.MouseEvent evt) {
                botao_fotoMouseEntered(evt);
            }
            public void mouseExited(java.awt.event.MouseEvent evt) {
                botao_fotoMouseExited(evt);
            }
        });

        jLabel2.setFont(new java.awt.Font("Segoe UI", 1, 14)); // NOI18N
        jLabel2.setForeground(new java.awt.Color(255, 255, 255));
        jLabel2.setHorizontalAlignment(javax.swing.SwingConstants.CENTER);
        jLabel2.setText("VOTAR EM BRANCO");

        javax.swing.GroupLayout botao_fotoLayout = new javax.swing.GroupLayout(botao_foto);
        botao_foto.setLayout(botao_fotoLayout);
        botao_fotoLayout.setHorizontalGroup(
            botao_fotoLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(botao_fotoLayout.createSequentialGroup()
                .addContainerGap()
                .addComponent(jLabel2, javax.swing.GroupLayout.DEFAULT_SIZE, 170, Short.MAX_VALUE)
                .addContainerGap())
        );
        botao_fotoLayout.setVerticalGroup(
            botao_fotoLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jLabel2, javax.swing.GroupLayout.DEFAULT_SIZE, 50, Short.MAX_VALUE)
        );

        jPanel1.add(botao_foto);
        botao_foto.setBounds(300, 440, 190, 50);

        jLabel3.setFont(new java.awt.Font("Segoe UI", 1, 14)); // NOI18N
        jLabel3.setForeground(new java.awt.Color(102, 102, 102));
        jLabel3.setHorizontalAlignment(javax.swing.SwingConstants.CENTER);
        jLabel3.setText("Informe Número");
        jPanel1.add(jLabel3);
        jLabel3.setBounds(180, 100, 140, 40);

        botao_inserir.setBackground(new java.awt.Color(102, 102, 102));
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

        jLabel5.setFont(new java.awt.Font("Segoe UI", 1, 14)); // NOI18N
        jLabel5.setForeground(new java.awt.Color(255, 255, 255));
        jLabel5.setHorizontalAlignment(javax.swing.SwingConstants.CENTER);
        jLabel5.setText("VOTAR");

        javax.swing.GroupLayout botao_inserirLayout = new javax.swing.GroupLayout(botao_inserir);
        botao_inserir.setLayout(botao_inserirLayout);
        botao_inserirLayout.setHorizontalGroup(
            botao_inserirLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(botao_inserirLayout.createSequentialGroup()
                .addContainerGap()
                .addComponent(jLabel5, javax.swing.GroupLayout.DEFAULT_SIZE, 80, Short.MAX_VALUE)
                .addContainerGap())
        );
        botao_inserirLayout.setVerticalGroup(
            botao_inserirLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jLabel5, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.DEFAULT_SIZE, 50, Short.MAX_VALUE)
        );

        jPanel1.add(botao_inserir);
        botao_inserir.setBounds(390, 380, 100, 50);

        numero.setBackground(new java.awt.Color(204, 204, 204));
        numero.setFont(new java.awt.Font("Segoe UI", 1, 14)); // NOI18N
        numero.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                numeroActionPerformed(evt);
            }
        });
        jPanel1.add(numero);
        numero.setBounds(180, 140, 140, 50);

        jPanel2.setBackground(new java.awt.Color(204, 204, 204));

        imagem.setHorizontalAlignment(javax.swing.SwingConstants.CENTER);
        imagem.setIcon(new javax.swing.ImageIcon(getClass().getResource("/view/images/icone_candidato2.png"))); // NOI18N

        javax.swing.GroupLayout jPanel2Layout = new javax.swing.GroupLayout(jPanel2);
        jPanel2.setLayout(jPanel2Layout);
        jPanel2Layout.setHorizontalGroup(
            jPanel2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(imagem, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
        );
        jPanel2Layout.setVerticalGroup(
            jPanel2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(imagem, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.DEFAULT_SIZE, 220, Short.MAX_VALUE)
        );

        jPanel1.add(jPanel2);
        jPanel2.setBounds(120, 250, 250, 220);

        jLabel4.setFont(new java.awt.Font("Segoe UI", 1, 14)); // NOI18N
        jLabel4.setForeground(new java.awt.Color(102, 102, 102));
        jLabel4.setHorizontalAlignment(javax.swing.SwingConstants.CENTER);
        jLabel4.setText("Nome");
        jPanel1.add(jLabel4);
        jLabel4.setBounds(120, 200, 250, 44);

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jPanel1, javax.swing.GroupLayout.DEFAULT_SIZE, 500, Short.MAX_VALUE)
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jPanel1, javax.swing.GroupLayout.DEFAULT_SIZE, 500, Short.MAX_VALUE)
        );

        setSize(new java.awt.Dimension(500, 500));
        setLocationRelativeTo(null);
    }// </editor-fold>//GEN-END:initComponents

    private void botao_fotoMouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_botao_fotoMouseClicked
        // TODO add your handling code here:
        if(jLabel5.getText().equals("VOTAR")){
            jLabel4.setVisible(true);
            jLabel4.setText("VOTO EM BRANCO");
            botao_foto.setVisible(false);
            jLabel2.setVisible(false);
            numero.setEditable(false);
            jLabel5.setText("CONFIRMA");
        }
    }//GEN-LAST:event_botao_fotoMouseClicked

    private void botao_fotoMouseEntered(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_botao_fotoMouseEntered
        // TODO add your handling code here:
        this.setCursor(Cursor.HAND_CURSOR);
    }//GEN-LAST:event_botao_fotoMouseEntered

    private void botao_fotoMouseExited(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_botao_fotoMouseExited
        // TODO add your handling code here:
        this.setCursor(Cursor.DEFAULT_CURSOR);
    }//GEN-LAST:event_botao_fotoMouseExited

    private void botao_inserirMouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_botao_inserirMouseClicked
        // TODO add your handling code here:
        if(jLabel5.getText().equals("VOTAR")){
            if(numero.getText().equals(""))numero.setText("-1");
            if(!controller.buscar_candidato(candidatos,Integer.parseInt(numero.getText()),imagem,jLabel4)){
                jLabel4.setVisible(true);
                jLabel4.setText("VOTO NULO");
            }
            else{
                jPanel2.setVisible(true);
                imagem.setVisible(true);
                jLabel4.setVisible(true);
            }
            botao_foto.setVisible(false);
            jLabel2.setVisible(false);
            numero.setEditable(false);
            jLabel5.setText("CONFIRMA");
        }
        else {
            Toolkit.getDefaultToolkit().beep();
            if(jLabel4.getText().equals("VOTO NULO"))nulo++;
            else if(jLabel4.getText().equals("VOTO EM BRANCO"))branco++;
            else controller.inserir_voto(candidatos,Integer.parseInt(numero.getText()));
            Registrar_votos tela = new Registrar_votos(corrente, nulo, branco, candidatos);
            tela.setVisible(true);
            this.setVisible(false);
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

    private void numeroActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_numeroActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_numeroActionPerformed

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
            java.util.logging.Logger.getLogger(Adicionar_voto.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(Adicionar_voto.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(Adicionar_voto.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(Adicionar_voto.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new Adicionar_voto().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JPanel botao_foto;
    private javax.swing.JPanel botao_inserir;
    private javax.swing.JLabel imagem;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JLabel jLabel3;
    private javax.swing.JLabel jLabel4;
    private javax.swing.JLabel jLabel5;
    private javax.swing.JPanel jPanel1;
    private javax.swing.JPanel jPanel2;
    private javax.swing.JTextField numero;
    // End of variables declaration//GEN-END:variables

}
