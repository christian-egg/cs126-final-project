#Project Description
The project I intend to create is a 2D auto-run platforming game similar to 
[these examples.](https://en.wikipedia.org/wiki/Category:Endless_runner_games) <br/>
The idea of the game is essentially that obstacles will be generated in front 
of the player as they move forwards (the player sprite stays in the same place
relative to the window, but the motion of the obstacles to the left simulate
the player moving to the right). Touching any of the obstacles is an instant
game over for the player, and the player will receive a score upon death based
on how long they survived. Additionally, the longer the player survives, the
faster the obstacles in front of them will move (so the game becomes more
difficult as you play).

I have spent a considerable amount of time over the course of my life playing
auto-run platforming games (mostly on mobile devices), so I would say I have a
good feel for how these games work and I would be pretty invested in making my
own game in this genre. While my game is undoubtedly going to be a bit simpler
than many games you'd find on the appstore of the same genre, I will be adding
unique features to ensure my program is complex enough. I plan to have 3 basic
inputs: jumping, crouching, and shooting. Jumping and crouching will be used to
avoid obstacles while shooting will be able to break obstacles designated with 
a special color. Additionally, after obtaining a score that is a multiple of
a certain amount, a boss fight will begin. The boss will essentially be a large
obstacle at the right of the screen that does not move relative to the player
but shoots projectiles that the player must avoid. During this boss fight 
state, the player will not gain score. To end the fight, the player must shoot
the boss until it runs out of health points (its hp will be displayed with a
health bar somewhere on the screen).

##Expected Development Timeline
In the first week, I expect to complete the basics of the game engine,
including the input-handling and animation for jumping, shooting and crouching
and making sure the game properly adjusts the player's collision. I will also
set up a simple game engine in a way that is easily extensible and I will
set up the scoring system. I need to make sure states can be easily implemented
(they will be represented by an enum) and that the player cannot make too many
inputs at once (can't jump while in the air, can't shoot too fast, etc).

For week two, I plan to add in obstacles (both breakable and unbreakable) and
create collision detection between the player and obstacles as well as between
the player's projectiles and breakable obstacles. I will have to make a method
that generates obstacles at an increasing rate (increases with time/score) and
generates obstacles far enough apart and in a way that they can actually be
avoided. I may need to set a max speed for the obstacles at a certain point.

For week three, I plan to add in the boss fight state and the boss' sprite
and projectiles. These projectiles will have to be generated differently from
the normal obstacles. I will need to make the boss' health scale off of score.
I will also need to make sure there is buffer time at the beginning and end of
the fight to let the player adjust. Also, I will need to display the health
bar of the boss somewhere on screen and have it update every frame.

If I finish early, my stretch goals would probably be to "polish" the game,
meaning to make it look/sound/feel better. This could be through adding music,
custom backgrounds that change every time a boss is beaten, adding sound
effects, or just adding better-looking sprites to the game. I could also add
a high-score storing system to show the 10 highest scores and let players
enter in a 3-letter name for themselves to show on the leaderboard.