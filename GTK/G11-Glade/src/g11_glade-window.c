/* g11_glade-window.c
 *
 * Copyright 2022 tiger
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "g11_glade-config.h"
#include "g11_glade-window.h"

struct _G11GladeWindow
{
  GtkApplicationWindow  parent_instance;

  /* Template widgets */
  GtkHeaderBar        *header_bar;
  GtkLabel            *label;
};

G_DEFINE_TYPE (G11GladeWindow, g11_glade_window, GTK_TYPE_APPLICATION_WINDOW)

static void
g11_glade_window_class_init (G11GladeWindowClass *klass)
{
  GtkWidgetClass *widget_class = GTK_WIDGET_CLASS (klass);

  gtk_widget_class_set_template_from_resource (widget_class, "/org/gnome/Builder/g11_glade-window.ui");
  gtk_widget_class_bind_template_child (widget_class, G11GladeWindow, header_bar);
  gtk_widget_class_bind_template_child (widget_class, G11GladeWindow, label);
}

static void
g11_glade_window_init (G11GladeWindow *self)
{
  gtk_widget_init_template (GTK_WIDGET (self));
}