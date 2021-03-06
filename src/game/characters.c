#include "types.h"
#include "characters.h"
#include "hud.h"
#include "model_ids.h"
#include "object_constants.h"
#include "audio_defines.h"
#include "luigi_audio_defines.h"
#include "pc/configfile.h"

struct Character gCharacters[CT_MAX] = {
    [CT_MARIO] = {
        .hudHead = ',',
        .cameraHudHead = GLYPH_CAM_MARIO_HEAD,
        .modelId = MODEL_MARIO,
        .capModelId = MODEL_MARIOS_CAP,
        .capKleptoAnimState = KLEPTO_ANIM_STATE_HOLDING_CAP,
        .capUkikiAnimState = UKIKI_ANIM_STATE_HAT_ON,
        // sounds
        .soundYahWahHoo        = SOUND_MARIO_YAH_WAH_HOO,
        .soundHoohoo           = SOUND_MARIO_HOOHOO,
        .soundYahoo            = SOUND_MARIO_YAHOO,
        .soundUh               = SOUND_MARIO_UH,
        .soundHrmm             = SOUND_MARIO_HRMM,
        .soundWah2             = SOUND_MARIO_WAH2,
        .soundWhoa             = SOUND_MARIO_WHOA,
        .soundEeuh             = SOUND_MARIO_EEUH,
        .soundAttacked         = SOUND_MARIO_ATTACKED,
        .soundOoof             = SOUND_MARIO_OOOF,
        .soundOoof2            = SOUND_MARIO_OOOF2,
        .soundHereWeGo         = SOUND_MARIO_HERE_WE_GO,
        .soundYawning          = SOUND_MARIO_YAWNING,
        .soundSnoring1         = SOUND_MARIO_SNORING1,
        .soundSnoring2         = SOUND_MARIO_SNORING2,
        .soundWaaaooow         = SOUND_MARIO_WAAAOOOW,
        .soundHaha             = SOUND_MARIO_HAHA,
        .soundHaha_2           = SOUND_MARIO_HAHA_2,
        .soundUh2              = SOUND_MARIO_UH2,
        .soundUh2_2            = SOUND_MARIO_UH2_2,
        .soundOnFire           = SOUND_MARIO_ON_FIRE,
        .soundDying            = SOUND_MARIO_DYING,
        .soundPantingCold      = SOUND_MARIO_PANTING_COLD,
        .soundPanting          = SOUND_MARIO_PANTING,
        .soundCoughing1        = SOUND_MARIO_COUGHING1,
        .soundCoughing2        = SOUND_MARIO_COUGHING2,
        .soundCoughing3        = SOUND_MARIO_COUGHING3,
        .soundPunchYah         = SOUND_MARIO_PUNCH_YAH,
        .soundPunchHoo         = SOUND_MARIO_PUNCH_HOO,
        .soundMamaMia          = SOUND_MARIO_MAMA_MIA,
        .soundGroundPoundWah   = SOUND_MARIO_GROUND_POUND_WAH,
        .soundDrowning         = SOUND_MARIO_DROWNING,
        .soundPunchWah         = SOUND_MARIO_PUNCH_WAH,
        .soundYahooWahaYippee  = SOUND_MARIO_YAHOO_WAHA_YIPPEE,
        .soundDoh              = SOUND_MARIO_DOH,
        .soundGameOver         = SOUND_MARIO_GAME_OVER,
        .soundHello            = SOUND_MARIO_HELLO,
        .soundPressStartToPlay = SOUND_MARIO_PRESS_START_TO_PLAY,
        .soundTwirlBounce      = SOUND_MARIO_TWIRL_BOUNCE,
        .soundSnoring3         = SOUND_MARIO_SNORING3,
        .soundSoLongaBowser    = SOUND_MARIO_SO_LONGA_BOWSER,
        .soundImaTired         = SOUND_MARIO_IMA_TIRED,
    },

    [CT_LUIGI] = {
        .hudHead = '.',
        .cameraHudHead = GLYPH_CAM_LUIGI_HEAD,
        .modelId = MODEL_LUIGI,
        .capModelId = MODEL_LUIGIS_CAP,
        .capKleptoAnimState = KLEPTO_ANIM_STATE_HOLDING_CAP_LUIGI,
        .capUkikiAnimState = UKIKI_ANIM_STATE_HAT_ON_LUIGI,
        // sounds
        .soundYahWahHoo        = SOUND_LUIGI_YAH_WAH_HOO,
        .soundHoohoo           = SOUND_LUIGI_HOOHOO,
        .soundYahoo            = SOUND_LUIGI_YAHOO,
        .soundUh               = SOUND_LUIGI_UH,
        .soundHrmm             = SOUND_LUIGI_HRMM,
        .soundWah2             = SOUND_LUIGI_WAH2,
        .soundWhoa             = SOUND_LUIGI_WHOA,
        .soundEeuh             = SOUND_LUIGI_EEUH,
        .soundAttacked         = SOUND_LUIGI_ATTACKED,
        .soundOoof             = SOUND_LUIGI_OOOF,
        .soundOoof2            = SOUND_LUIGI_OOOF2,
        .soundHereWeGo         = SOUND_LUIGI_HERE_WE_GO,
        .soundYawning          = SOUND_LUIGI_YAWNING,
        .soundSnoring1         = SOUND_LUIGI_SNORING1,
        .soundSnoring2         = SOUND_LUIGI_SNORING2,
        .soundWaaaooow         = SOUND_LUIGI_WAAAOOOW,
        .soundHaha             = SOUND_LUIGI_HAHA,
        .soundHaha_2           = SOUND_LUIGI_HAHA_2,
        .soundUh2              = SOUND_LUIGI_UH2,
        .soundUh2_2            = SOUND_LUIGI_UH2_2,
        .soundOnFire           = SOUND_LUIGI_ON_FIRE,
        .soundDying            = SOUND_LUIGI_DYING,
        .soundPantingCold      = SOUND_LUIGI_PANTING_COLD,
        .soundPanting          = SOUND_LUIGI_PANTING,
        .soundCoughing1        = SOUND_LUIGI_COUGHING1,
        .soundCoughing2        = SOUND_LUIGI_COUGHING2,
        .soundCoughing3        = SOUND_LUIGI_COUGHING3,
        .soundPunchYah         = SOUND_LUIGI_PUNCH_YAH,
        .soundPunchHoo         = SOUND_LUIGI_PUNCH_HOO,
        .soundMamaMia          = SOUND_LUIGI_MAMA_MIA,
        .soundGroundPoundWah   = SOUND_LUIGI_GROUND_POUND_WAH,
        .soundDrowning         = SOUND_LUIGI_DROWNING,
        .soundPunchWah         = SOUND_LUIGI_PUNCH_WAH,
        .soundYahooWahaYippee  = SOUND_LUIGI_YAHOO_WAHA_YIPPEE,
        .soundDoh              = SOUND_LUIGI_DOH,
        .soundGameOver         = SOUND_LUIGI_GAME_OVER,
        .soundHello            = SOUND_LUIGI_HELLO,
        .soundPressStartToPlay = SOUND_LUIGI_PRESS_START_TO_PLAY,
        .soundTwirlBounce      = SOUND_LUIGI_TWIRL_BOUNCE,
        .soundSnoring3         = SOUND_LUIGI_SNORING3,
        .soundSoLongaBowser    = SOUND_LUIGI_SO_LONGA_BOWSER,
        .soundImaTired         = SOUND_LUIGI_IMA_TIRED,
    },
};

struct Character* get_character_sound(struct MarioState* m) {
    if (m == NULL || m->character == NULL) { return &gCharacters[CT_MARIO]; }
    return configLuigiSounds ? m->character : &gCharacters[CT_MARIO];
}