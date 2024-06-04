import turtle

# Set up the screen
screen = turtle.Screen()
screen.title("Heart with Turtle")
screen.bgcolor("white")

# Create a turtle for drawing
heart = turtle.Turtle()
heart.color("red")
heart.fillcolor("red")
heart.begin_fill()

# Start drawing the heart shape
heart.left(50)
heart.forward(133)
heart.circle(50, 200)
heart.right(140)
heart.circle(50, 200)
heart.forward(133)

# Finish the drawing
heart.end_fill()
heart.hideturtle()
turtle.done()
