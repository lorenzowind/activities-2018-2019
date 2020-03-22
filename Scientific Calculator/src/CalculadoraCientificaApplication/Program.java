package CalculadoraCientificaApplication;

/**
 * @author Lorenzo Windmoller
 */
public class Program extends javax.swing.JFrame {

    Calculadora_cientifica calculadora;
    
    private boolean second = false;
    
    public Program() {
        initComponents();
        setLocationRelativeTo(null);
        calculadora = new Calculadora_cientifica(jLabel1,btn_div,btn_mult,btn_sub,btn_adi,btn_igual,lbl_degrad);
    }

    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jPanel1 = new javax.swing.JPanel();
        jPanel2 = new javax.swing.JPanel();
        jLabel1 = new javax.swing.JLabel();
        lbl_degrad = new javax.swing.JLabel();
        btn_porcent = new javax.swing.JButton();
        btn_div = new javax.swing.JButton();
        btn_ac = new javax.swing.JButton();
        btn_trocasinal = new javax.swing.JButton();
        btn_mm = new javax.swing.JButton();
        btn_mr = new javax.swing.JButton();
        btn_mc = new javax.swing.JButton();
        btn_mp = new javax.swing.JButton();
        btn_parent0 = new javax.swing.JButton();
        btn_parent1 = new javax.swing.JButton();
        btn_pot2 = new javax.swing.JButton();
        btn_9 = new javax.swing.JButton();
        btn_mult = new javax.swing.JButton();
        btn_7 = new javax.swing.JButton();
        btn_8 = new javax.swing.JButton();
        btn_napierpotn = new javax.swing.JButton();
        btn_10potn = new javax.swing.JButton();
        btn_pot3 = new javax.swing.JButton();
        btn_potn = new javax.swing.JButton();
        btn_2nd = new javax.swing.JButton();
        btn_raizq = new javax.swing.JButton();
        btn_6 = new javax.swing.JButton();
        btn_sub = new javax.swing.JButton();
        btn_4 = new javax.swing.JButton();
        btn_5 = new javax.swing.JButton();
        btn_ln = new javax.swing.JButton();
        btn_log = new javax.swing.JButton();
        btn_raizc = new javax.swing.JButton();
        btn_raizn = new javax.swing.JButton();
        btn_1div = new javax.swing.JButton();
        btn_sen = new javax.swing.JButton();
        btn_3 = new javax.swing.JButton();
        btn_adi = new javax.swing.JButton();
        btn_1 = new javax.swing.JButton();
        btn_2 = new javax.swing.JButton();
        btn_napier = new javax.swing.JButton();
        btn_mult10 = new javax.swing.JButton();
        btn_cos = new javax.swing.JButton();
        btn_tan = new javax.swing.JButton();
        btn_fat = new javax.swing.JButton();
        btn_pi = new javax.swing.JButton();
        btn_rand = new javax.swing.JButton();
        btn_cosh = new javax.swing.JButton();
        btn_tanh = new javax.swing.JButton();
        btn_rad = new javax.swing.JButton();
        btn_senh = new javax.swing.JButton();
        btn_0 = new javax.swing.JButton();
        btn_igual = new javax.swing.JButton();
        btn_ponto = new javax.swing.JButton();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);

        jPanel2.setBackground(new java.awt.Color(51, 51, 51));

        jLabel1.setFont(new java.awt.Font("SansSerif", 0, 48)); // NOI18N
        jLabel1.setForeground(new java.awt.Color(255, 255, 255));
        jLabel1.setHorizontalAlignment(javax.swing.SwingConstants.RIGHT);
        jLabel1.setText("0");
        jLabel1.setVerticalAlignment(javax.swing.SwingConstants.BOTTOM);

        lbl_degrad.setFont(new java.awt.Font("SansSerif", 0, 24)); // NOI18N
        lbl_degrad.setForeground(new java.awt.Color(255, 255, 255));
        lbl_degrad.setHorizontalAlignment(javax.swing.SwingConstants.CENTER);
        lbl_degrad.setText("Rad");

        javax.swing.GroupLayout jPanel2Layout = new javax.swing.GroupLayout(jPanel2);
        jPanel2.setLayout(jPanel2Layout);
        jPanel2Layout.setHorizontalGroup(
            jPanel2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, jPanel2Layout.createSequentialGroup()
                .addContainerGap()
                .addComponent(lbl_degrad, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(jLabel1, javax.swing.GroupLayout.DEFAULT_SIZE, 614, Short.MAX_VALUE)
                .addContainerGap())
        );
        jPanel2Layout.setVerticalGroup(
            jPanel2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, jPanel2Layout.createSequentialGroup()
                .addContainerGap()
                .addGroup(jPanel2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(jLabel1, javax.swing.GroupLayout.DEFAULT_SIZE, 68, Short.MAX_VALUE)
                    .addGroup(jPanel2Layout.createSequentialGroup()
                        .addGap(0, 0, Short.MAX_VALUE)
                        .addComponent(lbl_degrad, javax.swing.GroupLayout.PREFERRED_SIZE, 30, javax.swing.GroupLayout.PREFERRED_SIZE)))
                .addContainerGap())
        );

        btn_porcent.setBackground(new java.awt.Color(153, 153, 153));
        btn_porcent.setFont(new java.awt.Font("SansSerif", 1, 14)); // NOI18N
        btn_porcent.setText("%");
        btn_porcent.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btn_porcentActionPerformed(evt);
            }
        });

        btn_div.setBackground(new java.awt.Color(255, 153, 0));
        btn_div.setFont(new java.awt.Font("SansSerif", 1, 14)); // NOI18N
        btn_div.setForeground(new java.awt.Color(255, 255, 255));
        btn_div.setText("/");
        btn_div.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btn_divActionPerformed(evt);
            }
        });

        btn_ac.setBackground(new java.awt.Color(153, 153, 153));
        btn_ac.setFont(new java.awt.Font("SansSerif", 1, 14)); // NOI18N
        btn_ac.setText("AC");
        btn_ac.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btn_acActionPerformed(evt);
            }
        });

        btn_trocasinal.setBackground(new java.awt.Color(153, 153, 153));
        btn_trocasinal.setFont(new java.awt.Font("SansSerif", 1, 14)); // NOI18N
        btn_trocasinal.setText("+/-");
        btn_trocasinal.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btn_trocasinalActionPerformed(evt);
            }
        });

        btn_mm.setBackground(new java.awt.Color(153, 153, 153));
        btn_mm.setFont(new java.awt.Font("SansSerif", 1, 12)); // NOI18N
        btn_mm.setText("m-");
        btn_mm.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btn_mmActionPerformed(evt);
            }
        });

        btn_mr.setBackground(new java.awt.Color(153, 153, 153));
        btn_mr.setFont(new java.awt.Font("SansSerif", 1, 12)); // NOI18N
        btn_mr.setText("mr");
        btn_mr.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btn_mrActionPerformed(evt);
            }
        });

        btn_mc.setBackground(new java.awt.Color(153, 153, 153));
        btn_mc.setFont(new java.awt.Font("SansSerif", 1, 12)); // NOI18N
        btn_mc.setText("mc");
        btn_mc.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btn_mcActionPerformed(evt);
            }
        });

        btn_mp.setBackground(new java.awt.Color(153, 153, 153));
        btn_mp.setFont(new java.awt.Font("SansSerif", 1, 12)); // NOI18N
        btn_mp.setText("m+");
        btn_mp.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btn_mpActionPerformed(evt);
            }
        });

        btn_parent0.setBackground(new java.awt.Color(153, 153, 153));
        btn_parent0.setFont(new java.awt.Font("SansSerif", 1, 12)); // NOI18N
        btn_parent0.setText("(");
        btn_parent0.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btn_parent0ActionPerformed(evt);
            }
        });

        btn_parent1.setBackground(new java.awt.Color(153, 153, 153));
        btn_parent1.setFont(new java.awt.Font("SansSerif", 1, 12)); // NOI18N
        btn_parent1.setText(")");
        btn_parent1.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btn_parent1ActionPerformed(evt);
            }
        });

        btn_pot2.setBackground(new java.awt.Color(153, 153, 153));
        btn_pot2.setFont(new java.awt.Font("SansSerif", 1, 12)); // NOI18N
        btn_pot2.setText("x^2");
        btn_pot2.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btn_pot2ActionPerformed(evt);
            }
        });

        btn_9.setBackground(new java.awt.Color(204, 204, 204));
        btn_9.setFont(new java.awt.Font("SansSerif", 1, 14)); // NOI18N
        btn_9.setText("9");
        btn_9.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btn_9ActionPerformed(evt);
            }
        });

        btn_mult.setBackground(new java.awt.Color(255, 153, 0));
        btn_mult.setFont(new java.awt.Font("SansSerif", 1, 14)); // NOI18N
        btn_mult.setForeground(new java.awt.Color(255, 255, 255));
        btn_mult.setText("x");
        btn_mult.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btn_multActionPerformed(evt);
            }
        });

        btn_7.setBackground(new java.awt.Color(204, 204, 204));
        btn_7.setFont(new java.awt.Font("SansSerif", 1, 14)); // NOI18N
        btn_7.setText("7");
        btn_7.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btn_7ActionPerformed(evt);
            }
        });

        btn_8.setBackground(new java.awt.Color(204, 204, 204));
        btn_8.setFont(new java.awt.Font("SansSerif", 1, 14)); // NOI18N
        btn_8.setText("8");
        btn_8.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btn_8ActionPerformed(evt);
            }
        });

        btn_napierpotn.setBackground(new java.awt.Color(153, 153, 153));
        btn_napierpotn.setFont(new java.awt.Font("SansSerif", 1, 12)); // NOI18N
        btn_napierpotn.setText("e^x");
        btn_napierpotn.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btn_napierpotnActionPerformed(evt);
            }
        });

        btn_10potn.setBackground(new java.awt.Color(153, 153, 153));
        btn_10potn.setFont(new java.awt.Font("SansSerif", 1, 12)); // NOI18N
        btn_10potn.setText("10^x");
        btn_10potn.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btn_10potnActionPerformed(evt);
            }
        });

        btn_pot3.setBackground(new java.awt.Color(153, 153, 153));
        btn_pot3.setFont(new java.awt.Font("SansSerif", 1, 12)); // NOI18N
        btn_pot3.setText("x^3");
        btn_pot3.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btn_pot3ActionPerformed(evt);
            }
        });

        btn_potn.setBackground(new java.awt.Color(153, 153, 153));
        btn_potn.setFont(new java.awt.Font("SansSerif", 1, 12)); // NOI18N
        btn_potn.setText("x^y");
        btn_potn.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btn_potnActionPerformed(evt);
            }
        });

        btn_2nd.setBackground(new java.awt.Color(153, 153, 153));
        btn_2nd.setFont(new java.awt.Font("SansSerif", 1, 12)); // NOI18N
        btn_2nd.setText("2^nd");
        btn_2nd.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btn_2ndActionPerformed(evt);
            }
        });

        btn_raizq.setBackground(new java.awt.Color(153, 153, 153));
        btn_raizq.setFont(new java.awt.Font("SansSerif", 1, 12)); // NOI18N
        btn_raizq.setText("2√x");
        btn_raizq.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btn_raizqActionPerformed(evt);
            }
        });

        btn_6.setBackground(new java.awt.Color(204, 204, 204));
        btn_6.setFont(new java.awt.Font("SansSerif", 1, 14)); // NOI18N
        btn_6.setText("6");
        btn_6.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btn_6ActionPerformed(evt);
            }
        });

        btn_sub.setBackground(new java.awt.Color(255, 153, 0));
        btn_sub.setFont(new java.awt.Font("SansSerif", 1, 14)); // NOI18N
        btn_sub.setForeground(new java.awt.Color(255, 255, 255));
        btn_sub.setText("-");
        btn_sub.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btn_subActionPerformed(evt);
            }
        });

        btn_4.setBackground(new java.awt.Color(204, 204, 204));
        btn_4.setFont(new java.awt.Font("SansSerif", 1, 14)); // NOI18N
        btn_4.setText("4");
        btn_4.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btn_4ActionPerformed(evt);
            }
        });

        btn_5.setBackground(new java.awt.Color(204, 204, 204));
        btn_5.setFont(new java.awt.Font("SansSerif", 1, 14)); // NOI18N
        btn_5.setText("5");
        btn_5.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btn_5ActionPerformed(evt);
            }
        });

        btn_ln.setBackground(new java.awt.Color(153, 153, 153));
        btn_ln.setFont(new java.awt.Font("SansSerif", 1, 12)); // NOI18N
        btn_ln.setText("ln");
        btn_ln.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btn_lnActionPerformed(evt);
            }
        });

        btn_log.setBackground(new java.awt.Color(153, 153, 153));
        btn_log.setFont(new java.awt.Font("SansSerif", 1, 12)); // NOI18N
        btn_log.setText("log10");
        btn_log.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btn_logActionPerformed(evt);
            }
        });

        btn_raizc.setBackground(new java.awt.Color(153, 153, 153));
        btn_raizc.setFont(new java.awt.Font("SansSerif", 1, 12)); // NOI18N
        btn_raizc.setText("3√x");
        btn_raizc.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btn_raizcActionPerformed(evt);
            }
        });

        btn_raizn.setBackground(new java.awt.Color(153, 153, 153));
        btn_raizn.setFont(new java.awt.Font("SansSerif", 1, 12)); // NOI18N
        btn_raizn.setText("y√x");
        btn_raizn.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btn_raiznActionPerformed(evt);
            }
        });

        btn_1div.setBackground(new java.awt.Color(153, 153, 153));
        btn_1div.setFont(new java.awt.Font("SansSerif", 1, 12)); // NOI18N
        btn_1div.setText("1/x");
        btn_1div.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btn_1divActionPerformed(evt);
            }
        });

        btn_sen.setBackground(new java.awt.Color(153, 153, 153));
        btn_sen.setFont(new java.awt.Font("SansSerif", 1, 9)); // NOI18N
        btn_sen.setText("sin");
        btn_sen.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btn_senActionPerformed(evt);
            }
        });

        btn_3.setBackground(new java.awt.Color(204, 204, 204));
        btn_3.setFont(new java.awt.Font("SansSerif", 1, 14)); // NOI18N
        btn_3.setText("3");
        btn_3.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btn_3ActionPerformed(evt);
            }
        });

        btn_adi.setBackground(new java.awt.Color(255, 153, 0));
        btn_adi.setFont(new java.awt.Font("SansSerif", 1, 14)); // NOI18N
        btn_adi.setForeground(new java.awt.Color(255, 255, 255));
        btn_adi.setText("+");
        btn_adi.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btn_adiActionPerformed(evt);
            }
        });

        btn_1.setBackground(new java.awt.Color(204, 204, 204));
        btn_1.setFont(new java.awt.Font("SansSerif", 1, 14)); // NOI18N
        btn_1.setText("1");
        btn_1.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btn_1ActionPerformed(evt);
            }
        });

        btn_2.setBackground(new java.awt.Color(204, 204, 204));
        btn_2.setFont(new java.awt.Font("SansSerif", 1, 14)); // NOI18N
        btn_2.setText("2");
        btn_2.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btn_2ActionPerformed(evt);
            }
        });

        btn_napier.setBackground(new java.awt.Color(153, 153, 153));
        btn_napier.setFont(new java.awt.Font("SansSerif", 1, 12)); // NOI18N
        btn_napier.setText("e");
        btn_napier.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btn_napierActionPerformed(evt);
            }
        });

        btn_mult10.setBackground(new java.awt.Color(153, 153, 153));
        btn_mult10.setFont(new java.awt.Font("SansSerif", 1, 12)); // NOI18N
        btn_mult10.setText("EE");
        btn_mult10.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btn_mult10ActionPerformed(evt);
            }
        });

        btn_cos.setBackground(new java.awt.Color(153, 153, 153));
        btn_cos.setFont(new java.awt.Font("SansSerif", 1, 9)); // NOI18N
        btn_cos.setText("cos");
        btn_cos.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btn_cosActionPerformed(evt);
            }
        });

        btn_tan.setBackground(new java.awt.Color(153, 153, 153));
        btn_tan.setFont(new java.awt.Font("SansSerif", 1, 9)); // NOI18N
        btn_tan.setText("tan");
        btn_tan.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btn_tanActionPerformed(evt);
            }
        });

        btn_fat.setBackground(new java.awt.Color(153, 153, 153));
        btn_fat.setFont(new java.awt.Font("SansSerif", 1, 12)); // NOI18N
        btn_fat.setText("x!");
        btn_fat.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btn_fatActionPerformed(evt);
            }
        });

        btn_pi.setBackground(new java.awt.Color(153, 153, 153));
        btn_pi.setFont(new java.awt.Font("SansSerif", 1, 12)); // NOI18N
        btn_pi.setText("π");
        btn_pi.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btn_piActionPerformed(evt);
            }
        });

        btn_rand.setBackground(new java.awt.Color(153, 153, 153));
        btn_rand.setFont(new java.awt.Font("SansSerif", 1, 12)); // NOI18N
        btn_rand.setText("Rand");
        btn_rand.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btn_randActionPerformed(evt);
            }
        });

        btn_cosh.setBackground(new java.awt.Color(153, 153, 153));
        btn_cosh.setFont(new java.awt.Font("SansSerif", 1, 8)); // NOI18N
        btn_cosh.setText("cosh");
        btn_cosh.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btn_coshActionPerformed(evt);
            }
        });

        btn_tanh.setBackground(new java.awt.Color(153, 153, 153));
        btn_tanh.setFont(new java.awt.Font("SansSerif", 1, 8)); // NOI18N
        btn_tanh.setText("tanh");
        btn_tanh.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btn_tanhActionPerformed(evt);
            }
        });

        btn_rad.setBackground(new java.awt.Color(153, 153, 153));
        btn_rad.setFont(new java.awt.Font("SansSerif", 1, 12)); // NOI18N
        btn_rad.setText("Rad");
        btn_rad.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btn_radActionPerformed(evt);
            }
        });

        btn_senh.setBackground(new java.awt.Color(153, 153, 153));
        btn_senh.setFont(new java.awt.Font("SansSerif", 1, 8)); // NOI18N
        btn_senh.setText("sinh");
        btn_senh.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btn_senhActionPerformed(evt);
            }
        });

        btn_0.setBackground(new java.awt.Color(204, 204, 204));
        btn_0.setFont(new java.awt.Font("SansSerif", 1, 14)); // NOI18N
        btn_0.setText("0");
        btn_0.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btn_0ActionPerformed(evt);
            }
        });

        btn_igual.setBackground(new java.awt.Color(255, 153, 0));
        btn_igual.setFont(new java.awt.Font("SansSerif", 1, 14)); // NOI18N
        btn_igual.setForeground(new java.awt.Color(255, 255, 255));
        btn_igual.setText("=");
        btn_igual.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btn_igualActionPerformed(evt);
            }
        });

        btn_ponto.setBackground(new java.awt.Color(204, 204, 204));
        btn_ponto.setFont(new java.awt.Font("SansSerif", 1, 14)); // NOI18N
        btn_ponto.setText(".");
        btn_ponto.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btn_pontoActionPerformed(evt);
            }
        });

        javax.swing.GroupLayout jPanel1Layout = new javax.swing.GroupLayout(jPanel1);
        jPanel1.setLayout(jPanel1Layout);
        jPanel1Layout.setHorizontalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jPanel2, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
            .addGroup(jPanel1Layout.createSequentialGroup()
                .addContainerGap()
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(jPanel1Layout.createSequentialGroup()
                        .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                            .addGroup(jPanel1Layout.createSequentialGroup()
                                .addComponent(btn_fat, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                .addComponent(btn_sen, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                .addComponent(btn_cos, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                .addComponent(btn_tan, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                .addComponent(btn_napier, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                .addComponent(btn_mult10, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                .addComponent(btn_1, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                .addComponent(btn_2, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE))
                            .addGroup(jPanel1Layout.createSequentialGroup()
                                .addComponent(btn_rad, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                .addComponent(btn_senh, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                .addComponent(btn_cosh, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                .addComponent(btn_tanh, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                .addComponent(btn_pi, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                .addComponent(btn_rand, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                .addComponent(btn_0, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)))
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(btn_3, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addComponent(btn_ponto, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE))
                        .addGap(18, 18, 18)
                        .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(btn_igual, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                            .addComponent(btn_adi, javax.swing.GroupLayout.DEFAULT_SIZE, 74, Short.MAX_VALUE)))
                    .addGroup(jPanel1Layout.createSequentialGroup()
                        .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addGroup(jPanel1Layout.createSequentialGroup()
                                .addComponent(btn_1div, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                .addComponent(btn_raizq, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                .addComponent(btn_raizc, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                .addComponent(btn_raizn, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                .addComponent(btn_ln, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                .addComponent(btn_log, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                .addComponent(btn_4, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                .addComponent(btn_5, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                .addComponent(btn_6, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE))
                            .addGroup(jPanel1Layout.createSequentialGroup()
                                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING, false)
                                    .addComponent(btn_parent0, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                                    .addComponent(btn_2nd, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE))
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                                    .addGroup(jPanel1Layout.createSequentialGroup()
                                        .addComponent(btn_pot2, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                        .addComponent(btn_pot3, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                        .addComponent(btn_potn, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                        .addComponent(btn_napierpotn, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                        .addComponent(btn_10potn, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                        .addComponent(btn_7, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                        .addComponent(btn_8, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                        .addComponent(btn_9, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE))
                                    .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, jPanel1Layout.createSequentialGroup()
                                        .addComponent(btn_parent1, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                        .addComponent(btn_mc, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                        .addComponent(btn_mp, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                        .addComponent(btn_mm, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                        .addComponent(btn_mr, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                        .addComponent(btn_ac, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                        .addComponent(btn_trocasinal, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                        .addComponent(btn_porcent, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)))))
                        .addGap(18, 18, 18)
                        .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(btn_sub, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                            .addComponent(btn_mult, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                            .addComponent(btn_div, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))))
                .addContainerGap())
        );
        jPanel1Layout.setVerticalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel1Layout.createSequentialGroup()
                .addComponent(jPanel2, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                        .addComponent(btn_div, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addComponent(btn_porcent, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addComponent(btn_trocasinal, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addComponent(btn_ac, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addComponent(btn_mr, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addComponent(btn_mm, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addComponent(btn_mp, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addComponent(btn_mc, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addComponent(btn_parent1, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE))
                    .addComponent(btn_parent0, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                    .addComponent(btn_mult, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(btn_9, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(btn_8, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(btn_7, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(btn_10potn, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(btn_napierpotn, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(btn_potn, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(btn_pot3, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(btn_pot2, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(btn_2nd, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                    .addComponent(btn_sub, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(btn_6, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(btn_5, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(btn_4, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(btn_log, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(btn_ln, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(btn_raizn, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(btn_raizc, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(btn_raizq, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(btn_1div, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                    .addComponent(btn_adi, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(btn_3, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(btn_2, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(btn_1, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(btn_mult10, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(btn_napier, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(btn_tan, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(btn_cos, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(btn_sen, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(btn_fat, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                    .addComponent(btn_rand, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(btn_pi, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                        .addComponent(btn_cosh, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addComponent(btn_tanh, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE))
                    .addComponent(btn_senh, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(btn_rad, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(btn_0, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                        .addComponent(btn_ponto, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addComponent(btn_igual, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)))
                .addGap(0, 11, Short.MAX_VALUE))
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

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void btn_divActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btn_divActionPerformed
        // TODO add your handling code here:
        calculadora.operation(btn_div);
    }//GEN-LAST:event_btn_divActionPerformed

    private void btn_trocasinalActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btn_trocasinalActionPerformed
        // TODO add your handling code here:
        calculadora.numero_operacao.troca_sinal();
    }//GEN-LAST:event_btn_trocasinalActionPerformed

    private void btn_mrActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btn_mrActionPerformed
        // TODO add your handling code here:
        calculadora.numero_operacao.mr();
    }//GEN-LAST:event_btn_mrActionPerformed

    private void btn_mpActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btn_mpActionPerformed
        // TODO add your handling code here:
        calculadora.numero_operacao.mp();
    }//GEN-LAST:event_btn_mpActionPerformed

    private void btn_parent1ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btn_parent1ActionPerformed
        // TODO add your handling code here:
        calculadora.numero_operacao.parent(btn_parent1.getText().charAt(0));
    }//GEN-LAST:event_btn_parent1ActionPerformed

    private void btn_pot2ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btn_pot2ActionPerformed
        // TODO add your handling code here:
        calculadora.numero_operacao.pot_2();
    }//GEN-LAST:event_btn_pot2ActionPerformed

    private void btn_multActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btn_multActionPerformed
        // TODO add your handling code here:
        calculadora.operation(btn_mult);
    }//GEN-LAST:event_btn_multActionPerformed

    private void btn_8ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btn_8ActionPerformed
        // TODO add your handling code here:
        calculadora.operation(btn_8);
    }//GEN-LAST:event_btn_8ActionPerformed

    private void btn_10potnActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btn_10potnActionPerformed
        // TODO add your handling code here:
        if(!second)calculadora.numero_operacao.pot10n();
        else calculadora.numero_operacao.pot2n();
    }//GEN-LAST:event_btn_10potnActionPerformed

    private void btn_potnActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btn_potnActionPerformed
        // TODO add your handling code here:
        calculadora.operation(btn_potn);
    }//GEN-LAST:event_btn_potnActionPerformed

    private void btn_raizqActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btn_raizqActionPerformed
        // TODO add your handling code here:
        calculadora.numero_operacao.raizq();
    }//GEN-LAST:event_btn_raizqActionPerformed

    private void btn_subActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btn_subActionPerformed
        // TODO add your handling code here:
        calculadora.operation(btn_sub);
    }//GEN-LAST:event_btn_subActionPerformed

    private void btn_5ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btn_5ActionPerformed
        // TODO add your handling code here:
        calculadora.operation(btn_5);
    }//GEN-LAST:event_btn_5ActionPerformed

    private void btn_logActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btn_logActionPerformed
        // TODO add your handling code here:
        if(!second)calculadora.numero_operacao.log10();
        else calculadora.numero_operacao.log2();
    }//GEN-LAST:event_btn_logActionPerformed

    private void btn_raiznActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btn_raiznActionPerformed
        // TODO add your handling code here:
        calculadora.operation(btn_raizn);
    }//GEN-LAST:event_btn_raiznActionPerformed

    private void btn_senActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btn_senActionPerformed
        // TODO add your handling code here:
        if(!second)calculadora.numero_operacao.sen();
        else calculadora.numero_operacao.arcsen();
    }//GEN-LAST:event_btn_senActionPerformed

    private void btn_adiActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btn_adiActionPerformed
        // TODO add your handling code here:
        calculadora.operation(btn_adi);
    }//GEN-LAST:event_btn_adiActionPerformed

    private void btn_2ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btn_2ActionPerformed
        // TODO add your handling code here:
        calculadora.operation(btn_2);
    }//GEN-LAST:event_btn_2ActionPerformed

    private void btn_mult10ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btn_mult10ActionPerformed
        // TODO add your handling code here:
        calculadora.operation(btn_mult10);
    }//GEN-LAST:event_btn_mult10ActionPerformed

    private void btn_tanActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btn_tanActionPerformed
        // TODO add your handling code here:
        if(!second)calculadora.numero_operacao.tan();
        else calculadora.numero_operacao.arctan();
    }//GEN-LAST:event_btn_tanActionPerformed

    private void btn_randActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btn_randActionPerformed
        // TODO add your handling code here:
        calculadora.numero_operacao.rand();
    }//GEN-LAST:event_btn_randActionPerformed

    private void btn_tanhActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btn_tanhActionPerformed
        // TODO add your handling code here:
        if(!second)calculadora.numero_operacao.tanh();
        else calculadora.numero_operacao.arctanh();
    }//GEN-LAST:event_btn_tanhActionPerformed

    private void btn_senhActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btn_senhActionPerformed
        // TODO add your handling code here:
        if(!second)calculadora.numero_operacao.senh();
        else calculadora.numero_operacao.arcsenh();
    }//GEN-LAST:event_btn_senhActionPerformed

    private void btn_igualActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btn_igualActionPerformed
        // TODO add your handling code here:
        calculadora.calcular();
    }//GEN-LAST:event_btn_igualActionPerformed

    private void btn_pontoActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btn_pontoActionPerformed
        // TODO add your handling code here:
        calculadora.operation(btn_ponto);
    }//GEN-LAST:event_btn_pontoActionPerformed

    private void btn_1ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btn_1ActionPerformed
        // TODO add your handling code here:
        calculadora.operation(btn_1);
    }//GEN-LAST:event_btn_1ActionPerformed

    private void btn_0ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btn_0ActionPerformed
        // TODO add your handling code here:
        calculadora.operation(btn_0);
    }//GEN-LAST:event_btn_0ActionPerformed

    private void btn_3ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btn_3ActionPerformed
        // TODO add your handling code here:
        calculadora.operation(btn_3);
    }//GEN-LAST:event_btn_3ActionPerformed

    private void btn_4ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btn_4ActionPerformed
        // TODO add your handling code here:
        calculadora.operation(btn_4);
    }//GEN-LAST:event_btn_4ActionPerformed

    private void btn_6ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btn_6ActionPerformed
        // TODO add your handling code here:
        calculadora.operation(btn_6);
    }//GEN-LAST:event_btn_6ActionPerformed

    private void btn_7ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btn_7ActionPerformed
        // TODO add your handling code here:
        calculadora.operation(btn_7);
    }//GEN-LAST:event_btn_7ActionPerformed

    private void btn_9ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btn_9ActionPerformed
        // TODO add your handling code here:
        calculadora.operation(btn_9);
    }//GEN-LAST:event_btn_9ActionPerformed

    private void btn_acActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btn_acActionPerformed
        // TODO add your handling code here:
        calculadora.numero_operacao.ac();
    }//GEN-LAST:event_btn_acActionPerformed

    private void btn_parent0ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btn_parent0ActionPerformed
        // TODO add your handling code here:
        calculadora.numero_operacao.parent(btn_parent0.getText().charAt(0));
    }//GEN-LAST:event_btn_parent0ActionPerformed

    private void btn_pot3ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btn_pot3ActionPerformed
        // TODO add your handling code here:
        calculadora.numero_operacao.pot_3();
    }//GEN-LAST:event_btn_pot3ActionPerformed

    private void btn_napierpotnActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btn_napierpotnActionPerformed
        // TODO add your handling code here:
        if(!second)calculadora.numero_operacao.napier_pot();
        else calculadora.operation(btn_potn);
    }//GEN-LAST:event_btn_napierpotnActionPerformed

    private void btn_fatActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btn_fatActionPerformed
        // TODO add your handling code here:
        calculadora.numero_operacao.fat();
    }//GEN-LAST:event_btn_fatActionPerformed

    private void btn_lnActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btn_lnActionPerformed
        // TODO add your handling code here:
        if(!second)calculadora.numero_operacao.ln();
        else calculadora.operation(btn_ln);
    }//GEN-LAST:event_btn_lnActionPerformed

    private void btn_napierActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btn_napierActionPerformed
        // TODO add your handling code here:
        calculadora.numero_operacao.napier();
    }//GEN-LAST:event_btn_napierActionPerformed

    private void btn_piActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btn_piActionPerformed
        // TODO add your handling code here:
        calculadora.numero_operacao.pi();
    }//GEN-LAST:event_btn_piActionPerformed

    private void btn_1divActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btn_1divActionPerformed
        // TODO add your handling code here:
        calculadora.numero_operacao.div1();
    }//GEN-LAST:event_btn_1divActionPerformed

    private void btn_raizcActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btn_raizcActionPerformed
        // TODO add your handling code here:
        calculadora.numero_operacao.raizc();
    }//GEN-LAST:event_btn_raizcActionPerformed

    private void btn_cosActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btn_cosActionPerformed
        // TODO add your handling code here:
        if(!second)calculadora.numero_operacao.cos();
        else calculadora.numero_operacao.arccos();
    }//GEN-LAST:event_btn_cosActionPerformed

    private void btn_coshActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btn_coshActionPerformed
        // TODO add your handling code here:
        if(!second)calculadora.numero_operacao.cosh();
        else calculadora.numero_operacao.arccosh();
    }//GEN-LAST:event_btn_coshActionPerformed

    private void btn_radActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btn_radActionPerformed
        // TODO add your handling code here:
        calculadora.degrad();
    }//GEN-LAST:event_btn_radActionPerformed

    private void btn_porcentActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btn_porcentActionPerformed
        // TODO add your handling code here:
        calculadora.numero_operacao.percent();
    }//GEN-LAST:event_btn_porcentActionPerformed

    private void btn_mmActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btn_mmActionPerformed
        // TODO add your handling code here:
        calculadora.numero_operacao.mm();
    }//GEN-LAST:event_btn_mmActionPerformed

    private void btn_mcActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btn_mcActionPerformed
        // TODO add your handling code here:
        calculadora.numero_operacao.mc();
    }//GEN-LAST:event_btn_mcActionPerformed

    private void btn_2ndActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btn_2ndActionPerformed
        // TODO add your handling code here:
        second = !second;
        if(second){
            btn_sen.setText("sin^-1");
            btn_cos.setText("cos^-1");
            btn_tan.setText("tan^-1");
            btn_senh.setText("sinh^-1");
            btn_cosh.setText("cosh^-1");
            btn_tanh.setText("tanh^-1");
            btn_ln.setText("logy");
            btn_log.setText("log2");
            btn_10potn.setText("2^x");
            btn_napierpotn.setText("y^x");
        }
        else{
            btn_sen.setText("sin");
            btn_cos.setText("cos");
            btn_tan.setText("tan");
            btn_senh.setText("sinh");
            btn_cosh.setText("cosh");
            btn_tanh.setText("tanh");
            btn_ln.setText("ln");
            btn_log.setText("log10");
            btn_10potn.setText("10^x");
            btn_napierpotn.setText("e^x");
        }
    }//GEN-LAST:event_btn_2ndActionPerformed

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
            java.util.logging.Logger.getLogger(Program.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(Program.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(Program.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(Program.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>
        //</editor-fold>

        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new Program().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton btn_0;
    private javax.swing.JButton btn_1;
    private javax.swing.JButton btn_10potn;
    private javax.swing.JButton btn_1div;
    private javax.swing.JButton btn_2;
    private javax.swing.JButton btn_2nd;
    private javax.swing.JButton btn_3;
    private javax.swing.JButton btn_4;
    private javax.swing.JButton btn_5;
    private javax.swing.JButton btn_6;
    private javax.swing.JButton btn_7;
    private javax.swing.JButton btn_8;
    private javax.swing.JButton btn_9;
    private javax.swing.JButton btn_ac;
    private javax.swing.JButton btn_adi;
    private javax.swing.JButton btn_cos;
    private javax.swing.JButton btn_cosh;
    private javax.swing.JButton btn_div;
    private javax.swing.JButton btn_fat;
    private javax.swing.JButton btn_igual;
    private javax.swing.JButton btn_ln;
    private javax.swing.JButton btn_log;
    private javax.swing.JButton btn_mc;
    private javax.swing.JButton btn_mm;
    private javax.swing.JButton btn_mp;
    private javax.swing.JButton btn_mr;
    private javax.swing.JButton btn_mult;
    private javax.swing.JButton btn_mult10;
    private javax.swing.JButton btn_napier;
    private javax.swing.JButton btn_napierpotn;
    private javax.swing.JButton btn_parent0;
    private javax.swing.JButton btn_parent1;
    private javax.swing.JButton btn_pi;
    private javax.swing.JButton btn_ponto;
    private javax.swing.JButton btn_porcent;
    private javax.swing.JButton btn_pot2;
    private javax.swing.JButton btn_pot3;
    private javax.swing.JButton btn_potn;
    private javax.swing.JButton btn_rad;
    private javax.swing.JButton btn_raizc;
    private javax.swing.JButton btn_raizn;
    private javax.swing.JButton btn_raizq;
    private javax.swing.JButton btn_rand;
    private javax.swing.JButton btn_sen;
    private javax.swing.JButton btn_senh;
    private javax.swing.JButton btn_sub;
    private javax.swing.JButton btn_tan;
    private javax.swing.JButton btn_tanh;
    private javax.swing.JButton btn_trocasinal;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JPanel jPanel1;
    private javax.swing.JPanel jPanel2;
    private javax.swing.JLabel lbl_degrad;
    // End of variables declaration//GEN-END:variables

}
