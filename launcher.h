#ifndef LAUNCHER_H
# define LAUNCHER_H

#include "libft.h"
#include "libpf.h"
#include "libui.h"

#include <dirent.h>

# define GRAYISH_BLUEISH 0xff505168
# define GREENISH 0xffb3c0a4

# define MAP_PATH "C:/Users/Jony/source/repos/map_editor_v2/maps/"

typedef struct s_launcher
{
	t_ui_layout		layout;

	t_ui_window		*win_main;

	t_ui_element	*main_menu;

	t_ui_element	*play_button;
	t_ui_element	*editor_button;
	t_ui_element	*settings_button;
	t_ui_element	*quit_button;
	
	t_list			*menu_buttons; // t_ui_element *
	t_ui_element	*active_menu_button;

	t_ui_element	*play_menu;
	t_ui_element	*endless_button;
	t_ui_element	*story_button;
	t_ui_element	*active_play_button;
	t_ui_element	*endless_menu;
	t_ui_element	*story_menu;
	t_ui_element	*difficulty_dropdown;

	t_ui_element	*editor_menu;

	t_ui_element	*settings_menu;
	t_ui_element	*resolution_dropdown;

	t_list			*endless_maps; // char *
	t_list			*story_maps; // char *
}					t_launcher;

#endif
