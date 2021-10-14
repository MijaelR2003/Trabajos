
namespace TareaDeProgramacion
{
    partial class Form3
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.btnDoWhile = new System.Windows.Forms.Button();
            this.btnWhile = new System.Windows.Forms.Button();
            this.btnFor = new System.Windows.Forms.Button();
            this.label3 = new System.Windows.Forms.Label();
            this.txtprimernumero = new System.Windows.Forms.TextBox();
            this.txtsegundonumero = new System.Windows.Forms.TextBox();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.button1 = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // btnDoWhile
            // 
            this.btnDoWhile.BackColor = System.Drawing.Color.White;
            this.btnDoWhile.Location = new System.Drawing.Point(339, 191);
            this.btnDoWhile.Name = "btnDoWhile";
            this.btnDoWhile.Size = new System.Drawing.Size(130, 30);
            this.btnDoWhile.TabIndex = 14;
            this.btnDoWhile.Text = "Bucle do-while";
            this.btnDoWhile.UseVisualStyleBackColor = false;
            this.btnDoWhile.Click += new System.EventHandler(this.btnDoWhile_Click);
            // 
            // btnWhile
            // 
            this.btnWhile.BackColor = System.Drawing.Color.White;
            this.btnWhile.Location = new System.Drawing.Point(186, 191);
            this.btnWhile.Name = "btnWhile";
            this.btnWhile.Size = new System.Drawing.Size(113, 30);
            this.btnWhile.TabIndex = 13;
            this.btnWhile.Text = "Bucle while";
            this.btnWhile.UseVisualStyleBackColor = false;
            this.btnWhile.Click += new System.EventHandler(this.btnWhile_Click);
            // 
            // btnFor
            // 
            this.btnFor.BackColor = System.Drawing.Color.White;
            this.btnFor.Location = new System.Drawing.Point(31, 191);
            this.btnFor.Name = "btnFor";
            this.btnFor.Size = new System.Drawing.Size(116, 30);
            this.btnFor.TabIndex = 12;
            this.btnFor.Text = "Bucle for";
            this.btnFor.UseVisualStyleBackColor = false;
            this.btnFor.Click += new System.EventHandler(this.btnFor_Click);
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.BackColor = System.Drawing.Color.Transparent;
            this.label3.Font = new System.Drawing.Font("Times New Roman", 13.8F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point);
            this.label3.Location = new System.Drawing.Point(29, 50);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(217, 22);
            this.label3.TabIndex = 15;
            this.label3.Text = "Ingrese el primer numero";
            // 
            // txtprimernumero
            // 
            this.txtprimernumero.Font = new System.Drawing.Font("Segoe UI Symbol", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point);
            this.txtprimernumero.Location = new System.Drawing.Point(255, 43);
            this.txtprimernumero.Name = "txtprimernumero";
            this.txtprimernumero.Size = new System.Drawing.Size(183, 33);
            this.txtprimernumero.TabIndex = 17;
            // 
            // txtsegundonumero
            // 
            this.txtsegundonumero.Font = new System.Drawing.Font("Segoe UI Symbol", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point);
            this.txtsegundonumero.Location = new System.Drawing.Point(255, 91);
            this.txtsegundonumero.Name = "txtsegundonumero";
            this.txtsegundonumero.Size = new System.Drawing.Size(183, 33);
            this.txtsegundonumero.TabIndex = 18;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.BackColor = System.Drawing.Color.Transparent;
            this.label1.Font = new System.Drawing.Font("Times New Roman", 13.8F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point);
            this.label1.Location = new System.Drawing.Point(20, 98);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(229, 22);
            this.label1.TabIndex = 19;
            this.label1.Text = "Ingrese el segundo numero";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.BackColor = System.Drawing.Color.Transparent;
            this.label2.Font = new System.Drawing.Font("Times New Roman", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.label2.Location = new System.Drawing.Point(61, 150);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(377, 21);
            this.label2.TabIndex = 20;
            this.label2.Text = "Presione el boton segun cual bucle desea ejecutar";
            // 
            // button1
            // 
            this.button1.BackColor = System.Drawing.Color.White;
            this.button1.Location = new System.Drawing.Point(179, 249);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(132, 33);
            this.button1.TabIndex = 21;
            this.button1.Text = "Ocultar ejercicio";
            this.button1.UseVisualStyleBackColor = false;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // Form3
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 15F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.AliceBlue;
            this.ClientSize = new System.Drawing.Size(499, 317);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.txtsegundonumero);
            this.Controls.Add(this.txtprimernumero);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.btnDoWhile);
            this.Controls.Add(this.btnWhile);
            this.Controls.Add(this.btnFor);
            this.Name = "Form3";
            this.Text = "Ejercicio 2";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion
        private System.Windows.Forms.Button btnDoWhile;
        private System.Windows.Forms.Button btnWhile;
        private System.Windows.Forms.Button btnFor;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.TextBox txtprimernumero;
        private System.Windows.Forms.TextBox txtsegundonumero;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Button button1;
    }
}