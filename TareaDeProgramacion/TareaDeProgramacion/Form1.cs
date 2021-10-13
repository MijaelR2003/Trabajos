using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace TareaDeProgramacion
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            /*
             Para poder crear una pestaña creas como una clase pero en vez de una clase un Wndows Form 
            */
            Bitmap img = new Bitmap(Application.StartupPath + @"/img/fondo2.jpg");
            this.BackgroundImage = img;
            this.BackgroundImageLayout = ImageLayout.Stretch;
        }

        private void btnVerEjercicio_Click(object sender, EventArgs e)
        {
            switch (txtejercicio.Text) {
                case "Ejercicio 1":
                    Form formulario2 = new Form2();
                    formulario2.Show();
                    break;
                case "Ejercicio 2":
                    Form formulario3 = new Form3();
                    formulario3.Show();
                    break;
                case "Ejercicio 3":
                    Form formulario4 = new Form4();
                    formulario4.Show();
                    break;
                case "Ejercicio 4":
                    Form formulario5 = new Form5();
                    formulario5.Show();
                    break;
                case "Ejercicio 5":
                    Form formulario6 = new Form6();
                    formulario6.Show();
                    break;
                case "Ejercicio 6":
                    Form formulario7 = new Form7();
                    formulario7.Show();
                    break;
                case "Ejercicio 7":
                    Form formulario8 = new Form8();
                    formulario8.Show();
                    break;
                case "Ejercicio 8":
                    Form formulario9 = new Form9();
                    formulario9.Show();
                    break;
                case "Ejercicio 9":
                    Form formulario10 = new Form10();
                    formulario10.Show();
                    break;
                case "Ejercicio 10":
                    Form formulario11 = new Form11();
                    formulario11.Show();
                    break;
            }
        }

        private void btnSalir_Click(object sender, EventArgs e)
        {
            this.Close();
        }
    }
}

