#include <stdio.h>
#include <allegro5/allegro.h>
#include <Windows.h>
#include <iostream>
int main(int argc, char **argv) {
	using namespace std;

	ALLEGRO_DISPLAY *display = NULL;
	ALLEGRO_EVENT_QUEUE *event_queue = NULL;
	ALLEGRO_TIMER *timer = NULL;
	ALLEGRO_BITMAP *bouncer = NULL;


	al_init();


	timer = al_create_timer(.02);

	display = al_create_display(640, 480);

	al_set_target_bitmap(al_get_backbuffer(display));

	event_queue = al_create_event_queue();

	al_register_event_source(event_queue, al_get_display_event_source(display));

	al_register_event_source(event_queue, al_get_timer_event_source(timer));

	al_clear_to_color(al_map_rgb(0, 0, 0));

	al_set_window_title(display, "Skrt'n");


	al_flip_display();

	al_start_timer(timer);
	al_rest(80);

	al_destroy_bitmap(bouncer);
	al_destroy_timer(timer);
	al_destroy_display(display);
	al_destroy_event_queue(event_queue);

	return 0;
}