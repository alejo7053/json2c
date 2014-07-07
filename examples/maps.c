#include "maps.h"

maps mapsObject = {
    .markers = {
        {
            .point = {40.266044, -74.718479}, 
            .homeTeam = "Lawrence Library", 
            .awayTeam = "LUGip", 
            .markerImage = "images/red.png", 
            .information = "Linux users group meets second Wednesday of each month.", 
            .fixture = "Wednesday 7pm", 
            .capacity = "", 
            .previousScore = "", 
            .tv = NULL
        }, 
        {
            .point = {40.2116, -74.695702}, 
            .homeTeam = "Hamilton Library", 
            .awayTeam = "LUGip HW SIG", 
            .markerImage = "images/white.png", 
            .information = "Linux users can meet the first Tuesday of the month to work out harward and configuration issues.", 
            .fixture = "Tuesday 7pm", 
            .capacity = "", 
            .previousScore = NULL, 
            .tv = ""
        }, 
        {
            .point = {40.294535, -74.682012}, 
            .homeTeam = "Applebees", 
            .awayTeam = "After LUPip Mtg Spot", 
            .markerImage = "images/newcastle.png", 
            .information = "Some of us go there after the main LUGip meeting, drink brews, and talk.", 
            .fixture = "Wednesday whenever", 
            .capacity = "2 to 4 pints", 
            .previousScore = NULL, 
            .tv = ""
        }
    }
};

