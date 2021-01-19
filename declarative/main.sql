SELECT name, age FROM players WHERE age > 45;

INSERT INTO players (name, age) VALUES ('Mr Sharp', 37);

# Imperative eq
results = []
for (player in players) {
    if player.age > 45
        results.add(player)
}

return results