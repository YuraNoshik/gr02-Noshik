
namespace Lab01_Noshik_02
{
    partial class Lab01_Noshik_gr02
    {
        /// <summary>
        /// Обязательная переменная конструктора.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Освободить все используемые ресурсы.
        /// </summary>
        /// <param name="disposing">истинно, если управляемый ресурс должен быть удален; иначе ложно.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Код, автоматически созданный конструктором форм Windows

        /// <summary>
        /// Требуемый метод для поддержки конструктора — не изменяйте 
        /// содержимое этого метода с помощью редактора кода.
        /// </summary>
        private void InitializeComponent()
        {
            this.Pictures = new System.Windows.Forms.PictureBox();
            this.Delete = new System.Windows.Forms.Button();
            this.Add = new System.Windows.Forms.Button();
            this.figure = new System.Windows.Forms.Label();
            this.typesfigure = new System.Windows.Forms.ComboBox();
            this.listBox = new System.Windows.Forms.ListBox();
            ((System.ComponentModel.ISupportInitialize)(this.Pictures)).BeginInit();
            this.SuspendLayout();
            // 
            // Pictures
            // 
            this.Pictures.Anchor = ((System.Windows.Forms.AnchorStyles)((((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom) 
            | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.Pictures.Location = new System.Drawing.Point(12, 62);
            this.Pictures.Name = "Pictures";
            this.Pictures.Size = new System.Drawing.Size(776, 441);
            this.Pictures.TabIndex = 9;
            this.Pictures.TabStop = false;
            this.Pictures.Paint += new System.Windows.Forms.PaintEventHandler(this.Pictures_Paint);
            this.Pictures.MouseDown += new System.Windows.Forms.MouseEventHandler(this.Pictures_MouseDown);
            this.Pictures.MouseMove += new System.Windows.Forms.MouseEventHandler(this.Pictures_MouseMove);
            // 
            // Delete
            // 
            this.Delete.Location = new System.Drawing.Point(359, 5);
            this.Delete.Name = "Delete";
            this.Delete.Size = new System.Drawing.Size(106, 46);
            this.Delete.TabIndex = 8;
            this.Delete.Text = "Delete";
            this.Delete.UseVisualStyleBackColor = true;
            this.Delete.Click += new System.EventHandler(this.Delete_Click);
            // 
            // Add
            // 
            this.Add.Location = new System.Drawing.Point(233, 5);
            this.Add.Name = "Add";
            this.Add.Size = new System.Drawing.Size(106, 46);
            this.Add.TabIndex = 7;
            this.Add.Text = "Add";
            this.Add.UseVisualStyleBackColor = true;
            this.Add.Click += new System.EventHandler(this.Add_Click);
            // 
            // figure
            // 
            this.figure.AutoSize = true;
            this.figure.Location = new System.Drawing.Point(30, 6);
            this.figure.Name = "figure";
            this.figure.Size = new System.Drawing.Size(39, 26);
            this.figure.TabIndex = 6;
            this.figure.Text = "Figure:\r\n\r\n";
            // 
            // typesfigure
            // 
            this.typesfigure.FormattingEnabled = true;
            this.typesfigure.Items.AddRange(new object[] {
            "Circle",
            "Square",
            "Triangle"});
            this.typesfigure.Location = new System.Drawing.Point(75, 5);
            this.typesfigure.Name = "typesfigure";
            this.typesfigure.Size = new System.Drawing.Size(121, 21);
            this.typesfigure.TabIndex = 5;
            // 
            // listBox
            // 
            this.listBox.FormattingEnabled = true;
            this.listBox.Location = new System.Drawing.Point(521, 8);
            this.listBox.Name = "listBox";
            this.listBox.Size = new System.Drawing.Size(206, 43);
            this.listBox.TabIndex = 10;
            this.listBox.SelectedIndexChanged += new System.EventHandler(this.listBox_SelectedIndexChanged);
            // 
            // Lab01_Noshik_gr02
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 515);
            this.Controls.Add(this.listBox);
            this.Controls.Add(this.Pictures);
            this.Controls.Add(this.Delete);
            this.Controls.Add(this.Add);
            this.Controls.Add(this.figure);
            this.Controls.Add(this.typesfigure);
            this.Name = "Lab01_Noshik_gr02";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            ((System.ComponentModel.ISupportInitialize)(this.Pictures)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.PictureBox Pictures;
        private System.Windows.Forms.Button Delete;
        private System.Windows.Forms.Button Add;
        private System.Windows.Forms.Label figure;
        private System.Windows.Forms.ComboBox typesfigure;
        private System.Windows.Forms.ListBox listBox;
    }
}

