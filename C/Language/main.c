#include <gtk/gtk.h>
#include "basic.h"



int main (int argc, char **argv)
{

	//	GtkApplication *app = gtk_application_new ("org.gtk.example", G_APPLICATION_FLAGS_NONE);
	//	g_signal_connect (app, "activate", G_CALLBACK (activate), NULL);
	//	int status = g_application_run (G_APPLICATION (app), argc, argv);
	//	g_object_unref (app);
//	GError *error = NULL;

	gtk_init (&argc, &argv);

//	GtkBuilder* builder = gtk_builder_new ();

	GtkBuilder* builder = gtk_builder_new_from_file("../ui/Language.glade");
//	if (gtk_builder_add_from_file (builder, "ui/window.glade", &error) == 0)
//	{
//		g_printerr ("Error loading file: %s\n", error->message);
//		g_clear_error (&error);
//		return 1;
//	}

	/* Connect signal handlers to the constructed widgets. */
	GtkWidget* window = GTK_WIDGET(gtk_builder_get_object (builder, "window"));
	//	g_signal_connect (window, "destroy", G_CALLBACK (gtk_main_quit), NULL);

	gtk_builder_connect_signals (builder, NULL);//连接响应事件
	g_object_unref(G_OBJECT(builder));

	gtk_widget_show_all(window);
    
	gtk_main ();

	return 0;
}











//
//int main(int argc, char *argv[])
//{
//	GtkWidget *window;
//
//	gtk_init (&argc, &argv);
//
//	window = gtk_window_new (GTK_WINDOW_TOPLEVEL);
//
//	g_signal_connect (window, "destroy", G_CALLBACK (gtk_main_quit), NULL);
//
//	gtk_widget_show (window);
//
//	gtk_main ();
//
//	return 0;
//}

/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * main.c
 * Copyright (C) 2022 tiger <tiger@loongnix>
 * 
 * Language is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * Language is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
//
//#include "config.h"
//#include <gtk/gtk.h>
//#include <glib/gi18n.h>
////#include "BasicDataType/basic.h"
//
//

//
//typedef struct _Private Private;
//struct _Private
//{
//	/* ANJUTA: Widgets declaration for Language.glade - DO NOT REMOVE */
//};
//
//static Private* priv = NULL;
//
///* For testing purpose, define TEST to use the local (not installed) ui file */
//#define TEST
//#ifdef TEST
//#define UI_FILE "../ui/Language.glade"
//#else
//#define UI_FILE PACKAGE_DATA_DIR"/ui/Language.glade"
//#endif
//#define TOP_WINDOW "window"
//
///* Signal handlers */
///* Note: These may not be declared static because signal autoconnection
// * only works with non-static methods
// */
//
///* Called when the window is closed */
//void on_window_destroy (GtkWidget *widget, gpointer data)
//{
//    printf("bad");
//	gtk_main_quit ();
//}
//
//static GtkWidget*
//create_window (void)
//{
//    GtkWidget *window;
//	GtkBuilder *builder;
//	GError* error = NULL;
//
//	/* Load UI from file */
//	builder = gtk_builder_new ();
//	if (!gtk_builder_add_from_file (builder, UI_FILE, &error))
//	{
//		g_critical ("Couldn't load builder file: %s", error->message);
//		g_error_free (error);
//	}
//
//	/* Auto-connect signal handlers */
//	gtk_builder_connect_signals (builder, NULL);
//
//	/* Get the window object from the ui file */
//	window = GTK_WIDGET (gtk_builder_get_object (builder, TOP_WINDOW));
//        if (!window)
//        {
//                g_critical ("Widget \"%s\" is missing in file %s.",
//				TOP_WINDOW,
//				UI_FILE);
//        }
//
//	priv = g_malloc (sizeof (struct _Private));
//	/* ANJUTA: Widgets initialization for Language.glade - DO NOT REMOVE */
//
//	g_object_unref (builder);
//
//	
//	return window;
//}
//
//int
//main (int argc, char *argv[])
//{
// 	GtkWidget *window;
//
//
//
////#ifdef ENABLE_NLS
////
////	bindtextdomain (GETTEXT_PACKAGE, PACKAGE_LOCALE_DIR);
////	bind_textdomain_codeset (GETTEXT_PACKAGE, "UTF-8");
////	textdomain (GETTEXT_PACKAGE);
////#endif
//	
//	gtk_init (&argc, &argv);
//
//	window = create_window ();
//	gtk_widget_show (window);
//
//	gtk_main ();
//
//
//	g_free (priv);
//
//
//	return 0;
//}
//
