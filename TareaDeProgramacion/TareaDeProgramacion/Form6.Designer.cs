
namespace TareaDeProgramacion
{
    partial class Form6
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
            this.label3 = new System.Windows.Forms.Label();
            this.txtprimernumero = new System.Windows.Forms.TextBox();
            this.btndivisores = new System.Windows.Forms.Button();
            this.label1 = new System.Windows.Forms.Label();
            this.txtsegundonumero = new System.Windows.Forms.TextBox();
            this.button1 = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.BackColor = System.Drawing.Color.Transparent;
            this.label3.Font = new System.Drawing.Font("Times New Roman", 13.8F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point);
            this.label3.Location = new System.Drawing.Point(35, 42);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(217, 22);
            this.label3.TabIndex = 17;
            this.label3.Text = "Ingrese el primer numero";
            // 
            // txtprimernumero
            // 
            this.txtprimernumero.Font = new System.Drawing.Font("Segoe UI Symbol", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point);
            this.txtprimernumero.Location = new System.Drawing.Point(256, 36);
            this.txtprimernumero.Name = "txtprimernumero";
            this.txtprimernumero.Size = new System.Drawing.Size(183, 33);
            this.txtprimernumero.TabIndex = 19;
            // 
            // btndivisores
            // 
            this.btndivisores.BackColor = System.Drawing.Color.White;
            this.btndivisores.Font = new System.Drawing.Font("Segoe UI", 15F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.btndivisores.Location = new System.Drawing.Point(164, 140);
            this.btndivisores.Name = "btndivisores";
            this.btndivisores.Size = new System.Drawing.Size(155, 66);
            this.btndivisores.TabIndex = 20;
            this.btndivisores.Text = "Mostrar sus divisores";
            this.btndivisores.UseVisualStyleBackColor = false;
            this.btndivisores.Click += new System.EventHandler(this.btndivisores_Click);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.BackColor = System.Drawing.Color.Transparent;
            this.label1.Font = new System.Drawing.Font("Times New Roman", 13.8F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point);
            this.label1.Location = new System.Drawing.Point(22, 91);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(229, 22);
            this.label1.TabIndex = 21;
            this.label1.Text = "Ingrese el segundo numero";
            // 
            // txtsegundonumero
            // 
            this.txtsegundonumero.Font = new System.Drawing.Font("Segoe UI Symbol", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point);
            this.txtsegundonumero.Location = new System.Drawing.Point(257, 84);
            this.txtsegundonumero.Name = "txtsegundonumero";
            this.txtsegundonumero.Size = new System.Drawing.Size(183, 33);
            this.txtsegundonumero.TabIndex = 22;
            // 
            // button1
            // 
            this.button1.BackColor = System.Drawing.Color.White;
            this.button1.Location = new System.Drawing.Point(171, 230);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(132, 33);
            this.button1.TabIndex = 23;
            this.button1.Text = "Ocultar ejercicio";
            this.button1.UseVisualStyleBackColor = false;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // Form6
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 15F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.Aquamarine;
            this.ClientSize = new System.Drawing.Size(477, 291);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.txtsegundonumero);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.btndivisores);
            this.Controls.Add(this.txtprimernumero);
            this.Controls.Add(this.label3);
            this.Name = "Form6";
            this.Text = "Ejercicio 5";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.TextBox txtprimernumero;
        private System.Windows.Forms.Button btndivisores;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.TextBox txtsegundonumero;
        private System.Windows.Forms.Button button1;
    }
}