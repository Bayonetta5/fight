
//**********************************************************\\
// 代码编辑器\\
//**********************************************************\\
\\
#ifndef EN_RES_H
#define EN_RES_H
//---------------------------------------------------------------------------

#define	STR_BEKILL_ss				"%s 学艺不精，惨死在 %s 手下!"
#define	STR_MISS_BET				"错失良机，请留意下次..."
#define	STR_SETLOCK					"setlock"
#define	STR_UNLOCK					"unlock"
#define	STR_CLEARLOCK				"clearlock"
#define	STR_SETLOCK_HELP			"No old password before you set protected code which consists of 6-9 numbers. Avoid using too simple password. Instruction:/setlock password"
#define	STR_UNLOCK_HELP				"Protected code is open temporarily, and will lock automatically when you log off. Instruction:/unlock password"
#define	STR_CLEARLOCK_HELP			"Protected code is cleared permanently. Instruction: /clearlock password"
#define	STR_SETLOCK_OK				"Protected code is set. Type [/unlock password] to open it; type [/clearlock password] to clear it permanently."
#define	STR_SETLOCK_FAIL			"Failed to set protected code. No old password before you set it, which consists of 6-9 numbers. Avoid using too simple password. Instruction:/setlock password "
#define	STR_UNLOCK_OK				"Protected code is open. It is enable automatically after you log off."
#define	STR_CLEARLOCK_OK			"Protected code is cleared permanently. Use [/setlock password] to re-set the code."
#define	STR_LOCKKEY_DENY			"Please open protected code first. Instruction: /unlock password"
#define	STR_NO_LOCKKEY				"暂未设置密码。"
#define	STR_UPLEV_HOLE1				"as a really really lucky guy, %s uplev his %s and got the no.1 gem hole"
#define	STR_UPLEV_HOLE2				"as a really really lucky guy, %s uplev his %s and got the no.2 gem hole"
#define	STR_WIN_BET_sd				"%s won %d silvers by gambling with dice."
#define	STR_AWARD_VIRTUE_su			"%s gained %u virtue points."
#define	STR_SYNDICATE_LEADER		"Guild Leader"
#define	STR_SYNDICATE_LEADER2		"Deputy Guild Leader"
#define	STR_SYNDICATE_LEADER3		"Branch Manager"
#define	STR_SYNDICATE_LEADER4		"Deputy Branch Manager"
#define	STR_SYNDICATE_LEADER5		"Intern Branch Manager"
#define	STR_SYNDICATE_MEMBER		"Guild Member"
#define	STR_ERROR					"Error"
#define	STR_DELETE_FAILED			"Delete failure!"
#define	STR_YOUR_CANNOT_WALK		"You cannot walk."
#define	STR_TOP_LIST_dsd			"No. %d: %s(%d)"
#define	STR_KICKOUT_ALL_AFTER		"Begin to process kickoutall，Login is banned. After %d seconds, all players will be kicked out."
#define	STR_KICKOUT_ALL				"Begin to process kickoutall. Log-in is forbidden. All the players are logged off."
#define	STR_LOGIN_ANOTHER			"Someone else is using this account to log in the server."
#define	STR_LOGIN_AGAIN				"Someone else is using this account to play the game."
#define	STR_WEAPON_SKILL_UPLEV		"Congrats. Your weapon proficiency is one level up."
#define	STR_KO_LIST_TITLE			"Rank  Name           Amount"
#define	STR_TEAM_MONEY_s			"Picking up money: %s"
#define	STR_TEAM_ITEM_s				"Picking up items: %s"
#define	STR_OPEN					"allowed"
#define	STR_CLOSE					"banned"
#define STR_NOT_DISCARDABLE			"This item cannot be dropped or sold."
#define STR_NEXT_PAGE				"Next"
#define STR_CLOSE_BUTTON			"Close"
#define STR_TOO_LOWER_SYN_MONEY		"Insufficient guild fund. This function is disabled."
#define STR_HITRATE_ADD				"Skill startup：Within %d seconds, your hit rate will be increased by %d times"
#define STR_DEFENCE_ADD				"Skill startup：Within %d seconds, your defense will be increased by %d times"
#define STR_DEFENCE_ADD2			"Skill startup：Within %d seconds, your defense will be increased by %d percent"
#define STR_ATTACK_ADD				"Skill startup：Within %d seconds, your attack will be increased by %d times"
#define STR_DODGE_ADD				"Skill startup: Within %d seconds, dodge will be increased by %d%%."
#define DRAGON_BALL_DROP			"A dragon ball drop from the monster killed by %s."
#define EXPLOST_PAYBY_SYNFUND		"%u exp lost reduce by syndicate fund."
#define MALE_MATE_LOGIN				"Your husband get online."
#define FEMALE_MATE_LOGIN			"Your wife is online now."
#define NOMATE_NAME					"None"
#define TITILE_NONE					"None"
#define SYNNAME_NONE				"None"
#define	ACTIONSTR_NONE				"None"
#define	STR_DESTROY_SYNDICATE_SOON	"Your guild's fund has been used up. Please replenish the guild fund or your will be terminated forcedly."
#define	STR_TARGET_OFFLINE			"The target is not on-line."
#define	STR_SYNDICATE_COMBINESUB_ss	"Guild %s is merged by %s."
#define	STR_SUPERMAN_BROADCAST_sddd	"%s has killed %d monsters with XP skills and ranks %d on KO board."
#define	STR_NEXTEQP_OVERLEV			"Level requirement of the new equipment is higher than your level!"
#define	STR_DISPATCHXP_s			"%s roared, and the teammates' XP boosts immediately1"
#define	STR_BOOTH_BUY_sds			"%s spent %d silvers to buy your %s."
#define	STR_DISABLE_LAY_SYNTRANS	"This kind of NPC is not allowed to place here!"
#define	STR_ITEM_LEV_TOO_HIGH		"Level reqirement of the equipment is much too high!"
#define	STR_TEAM_HUNT				"Notorious %s was finally hunted down by the detective team headed by %s!"
#define	STR_FOND_WANTED				"The wanted target [%s] is found! "
#define	STR_FOND_POLICEWANTED		"The governmental wanted target [%s] is found! "
#define	STR_CANT_STORAGE			"This item cannot be deposited!"
#define	STR_SYN_FULL				"Error: the amount of guild members is full!"
#define	STR_JOIN_SYN_FAILED			"Error: failed to join!"
#define	STR_INVALID_PET_NAME		"Error: forbidden name!"
#define	STR_KICKOUT_MEMBER_s		"%s did not abide by the rules of the guild and was driven out of the guild."
#define	STR_KICKOUT_ME_s			"You have been dispelled from the guild by %s."
#define	STR_NO_ENOUGH_POWER			"You do not have enough mana to broadcast!"
#define	STR_NO_ENOUGH_LEVEL			"Your level is not high enough to broadcast!"
#define	STR_NO_BONUS				"Sorry. No prize available or the prize has not been confirmed in the prize claiming web page."
#define	STR_WARNING_CRASH			"Warning: the command is for local test only, or the server may collape!"
#define	STR_CAN_STAND				"You cannot stop in the destination!"
#define	STR_SET_MAX_PLAYERS_u		"Max logged in users allowed changed to: %u"
#define	STR_SHOW_PLAYERS_uu			"Current online players: %u, max online players: %u"
#define	STR_CAN_NOT_TALK			"You have been stricken the vital point and cannot talk temporarily!"
#define	STR_ARRESTMENT_PK_MODE		"Restrictive PK mode. You can only attack monsters, black-name and red-name players."
#define	STR_TEAM_PK_MODE			"Team PK mode. You can attack monsters and players except for your teammates."
#define	STR_SAFE_PK_MODE			"Peace mode. You can only attack monsters and won't hurt other players."
#define	STR_FREE_PK_MODE			"Free PK mode. You can attack anyone."
#define	STR_NEED_PICK				"You must use a pecker to mine."
#define	STR_SYNDICATE_DESTROY_s		"Guild %s has been terminated."
#define	STR_SYNDICATE_CREATE_ss		"Congratulations! %s has set up %s successfully."
#define	STR_SYN_LEADER_LOSE_uss		"Guild [%u]'s guild leader [%s] disappeared and [%s] took the place."
#define	STR_DONATE_ssd				"%s donated %s %d Oz."
#define	STR_SYN_WAR_END				"Guild battle ended!"
#define	STR_SYN_WAR_START			"Guild battle started!"
#define	STR_GOT_WIN_s				"%s has won!"
#define	STR_ERROR_DUPLICATE_NAME	"Error: the character has been existed!"
#define	STR_ERROR_ILLEGAL_NAME		"Error: the name of character is invalid!"
#define	STR_ERROR_ILLEGAL_PASSWORD	"Error: invalid password!"
#define	STR_ERROR_ILLEGAL_ACCOUNT	"Error: invalid account ID!"
#define	STR_ERROR_SERVER_FULL		"Error: the server is full. Please re-log in later!"
#define	STR_ERROR_LOWER_VERSION		"Error: invalid version number. Please update your client!"
#define	STR_ERROR_VERSION			"Error: invalid version number!"
#define	STR_FEW_FEE_NOTIFY			"You month card will expire on %s. Please recharge your account soon."
#define	STR_ACCOUNT_NOFEE			"Your account has not been recharged."
#define	STR_LOGIN_ISP_FAIL			"Fail to log into ISP payment system. Curently, your account is charged."
#define	STR_FEETYPE_KNOWN			"Payment type: unknown."
#define	STR_FEETYPE_HOUR			"Payment type: hour card. Reminding hours: %d.%d."
#define	STR_FEETYPE_MONTH			"Payment type: month card. Expired on:  %d(year) %d(month) %d(day)"
#define	STR_FEETYPE_BARHOUR			"Payment type: internet cafe point card."
#define	STR_FEETYPE_BARMONTH		"Payment type: internet cafe point card. Licensed amount: %d."
#define	STR_FEETYPE_ISP				"Payment type: ISP payment system."
#define	STR_FEETYPE_FREE			"Payment type:  free test."
#define	STR_SHUTDOWN_NOTIFY			"Server maintenance for ten minutes. Please log off immediately to avoind data lost."
#define	STR_NONSUCH_TRADE_sssu		"[Trade] Trading superior item. Player [%s] gave player [%s] [%s][%u]"
#define	STR_NOT_SO_MUCH_MONEY	    "You do not have enough money."
#define	STR_NOT_ENOUGH_MONEY	    "You don't have %d silvers!"
#define	STR_DIE_FORGIVE	            "He that dies pays all debts. Can't you forgive him?"
#define	STR_DIE_STOP_ATTACK	        "The target is dead. Move on."
#define	STR_ATTACK_POLICE	        "You are attempting to attack the police. Please behave yourself."
#define	STR_KILLING_EXPERIENCE	    "%u extra experience points gained for killing."
#define	STR_KILLING_EXPEX			"%u extra experience points gained for killing."
#define	STR_BAG_FULL	                                     "Your bag is full!"
#define	STR_TRADE_SUCCEED	        "Trading succeeded."
#define	STR_TRADE_FAIL	                     "Trading failed!"
#define	STR_USE_ITEM	                                     "You have used an item."
#define	STR_INVALID_GUILD_NAME	     "Invalid guild name!"
#define	STR_GUILD_FUND_NOT_ENOUGH	     "Guild fund has not reached %u silvers!"
#define	STR_NOT_AUTHORIZED	                     "You have not been authorized!"
#define	STR_ALLY_FULL	                                     "Allies List is full!"
#define	STR_SYN_PLACE_FULL	        "All the posts have been occupied!"
#define	STR_WANTED_ORDER	        "%u silvers earnest money is deducted.  You have got No.%d Pursuing Order. Target: %s; Reward: %u silvers."
#define	STR_WANTED_INFO				"It is said that the wanted target appears around [%s]."
#define	STR_INVALID_WANTED	        "Invalid Pursuing Number！"
#define	STR_MAX_BONUTY				"You should offer a reward of %d silvers at most!"
#define	STR_MIN_BONUTY				"You should offer a reward of %d silvers at least!"
#define	STR_SUPERADD_BONUTY			"The reward for No.%d Pursuing Order is increased to %u silvers!"
#define	STR_LOWEST_SUPERADD_BONUTY	"You must increase %u silvers at lease!"
#define	STR_CANCEL_WANTED			"Pursuing Order for %u has been canceled."
#define	STR_NO_DISBAND	            "The guild is too big to be disbanded. Please transfer your guild power."
#define	STR_PROTECTED_CODE	        "Please enter the protection code first."
#define	STR_HIS_ALLY_FULL	        "The target's Alley List is full!"
#define	STR_NOT_HERE	            "The player is not in the vicinity!"
#define	STR_NOT_ENOUGH_LEV			"You have not reached level %d!"
#define	STR_LEVEL_NOT_ENOUGH	    "The target's level is insufficient!"
#define	STR_INVALID_NAME	        "Invalid name."
#define	STR_INVALID_MSG	            "Invalid message!"
#define	STR_MAGIC_FAILED            "Magic failed!"
#define	STR_CANNOT_DEPOSIT	        "Error: The item is not suitable for deposit!"
#define	STR_FORBIDDEN_GUILD_NAME	"You are forbidden to use this guild name."
#define	STR_GUILD_INEXIST	        "The guild does not exist."
#define	STR_TEAM_EXPERIENCE	        "%d team experience points gained."
#define	STR_TEAM_EXPEX				"You gained  %d team experience points with additional rewarding experience points due to low level teammates."
#define	STR_LOST_EXPERIENCE	        "You lost %d experience points!"
#define	STR_KILLING_TO_MUCH	        "You have done too much killing. You will pay for what you have done."
#define	STR_NOT_PK_MODE	            "You can't attack the target in the current mode!"
#define	STR_NOT_PK_EXP	            "You cannot PK when your experience point is under 0."

#define	STR_PK_FORBIDDEN	                     "PK is forbidden here."
#define	STR_MSG_SENT	   		     "Message sent successfully. The target will receive it as soon as he/she logs into the game."
#define	STR_MSG_FAILED				"Failed to leave message. Please leave message to a friend every %d minutes."
#define	STR_INVALID_COORDINATE	     "Invalid coordinates."
#define	STR_GONE	                                     "Gone"
#define	STR_JUMPED	                                     "Jumped"
#define	STR_CONNECTION_OFF	                     "Bad Connection. Log off automatically."
#define	STR_WEAPON_SKILL_UP	                     "Congratulations! Your weapon proficiency has been improved."
#define	STR_TEAMMATE_CANNOT_CREATE	     "[Team]You are already in a team and cannot create a new one."
#define	STR_CREATE_TEAM_FAILED	     "[Team]Failed to create a team."
#define	STR_FULLBAG_NO_MORE	                     "You bag is full and can't hold more items."
#define	STR_HEAVEY_BAG	                     "Your bag is so too heavy to hold any more items."
#define	STR_ITEM_NOT_FOUND	                     "The item is not found!"
#define	STR_ITEM_INEXIST	                     "The item does not exist!"
#define	STR_MONEYBAG_FULL	                     "Your moneybag is full!"
#define	STR_MAKE_ITEM_FAILED                      "Failed to generate map item [%u]."
#define	STR_MAKE_MONEY_FAILED	     "Failed to generate map money [%d]."
#define	STR_DAMAGED_REPAIR	                     "%s has been severely damaged. Please repair it soon; otherwise, it will be gone."
#define	STR_DURABILITY_REPAIR	                     "Durability of %s is too low. Please repair it soon to prevent further damaging."
#define	STR_FAR_CANNOT_PICK	                     "The item is too far away for you to pick up."
#define	STR_FULL_CANNOT_PICK	                     "Your bag is full and you can not pick up any more items."
#define	STR_PICK_MONEY	                     "You have picked up %u silvers."
#define	STR_FAILED_GENERATE_ITEM	     "Failed to generate the item."
#define	STR_OTHERS_ITEM	                     "You have to wait a little bit before you can pick up any items that were dropped from the monsters being killed by other players."
#define	STR_GOT_ITEM	                                     "You have got a(an) %s."
#define	STR_DRAGONBALL	                     "A [Dragon Ball] is required to improve equipment."
#define	STR_REPAIR_THEN_IMPROVE	     "Please repair the equipment before improving it."
#define	STR_SUPERIOR_ALREADY	                     "The equipment is already in superior grade."
#define	STR_CONNOT_IMPROVE	                     "The equipment cannot been improved."
#define	STR_METEOR	                                     "A [Meteor] is required to upgrade equipment."
#define	STR_REPAIR_THEN_UPGRADE	     "Please repair the equipment before upgrading it."
#define	STR_UPGRADE_NOMORE	                     "The equipment cannot be upgraded any more!"
#define	STR_MINE_WITH_PECKER   	     "You must use a pecker to mine."
#define	STR_NO_MINE	                                     "No mine here."
#define	STR_GOLD_ORE	                                     "You gained a gold ore!"
#define	STR_EUXENITE_ORE	                     "You gained an euxenite ore!"
#define	STR_IRON_ORE	                                     "You gained an iron ore!"
#define	STR_COPPER_ORE	                                     "You gained copper ore!"
#define	STR_SILVER_ORE	                     "You gained a silver ore!"
#define	STR_GAIN_GEM	                                     "Congratulations! You gained a gem!"
#define	STR_UNQUALIFIED	                     "Error: Failed to meet condition."
#define	STR_DIE	                                     "You are already dead."
#define	STR_DONOT_GIVE_UP	                     "You are taking on important responsibilities. How can you abandon yourself?"
#define	STR_CANNOT_JUMP	                     "You cannot jump!"
#define	STR_CHEAT	                                     "[Cheat]The points you are allotting are more than the limit."
#define	STR_FRIEND_LIST_FULL	                     "The target's friend list is full."
#define	STR_YOUR_FRIEND_ALREADY	    "The target has been your friend."
#define	STR_MAKE_FRIEND_SENT                     "Request of making friends has been sent out."
#define	STR_NOT_YOUR_FRIEND	                     "%s is not your friend."
#define	STR_NO_PK_VILLAGE	                     "PK is forbidden in Birth Village."
#define	STR_NEVER_PROPOSED	                     "%s never proposed to you."
#define	STR_SINGLE	                                     "You are still single."
#define	STR_NOT_YOUR_SPOUSE	                     "%s is not your spouse."
#define	STR_NOT_ENOUGH_MANA	                     "You don't have enough mana."
#define	STR_UNABLE_USE_ITEM	                     "Unable to use item!"
#define	STR_YOUR_BAG_FULL	                     "Your bag is full!"
#define	STR_INVALID_AMOUNT	                     "Invalid amount!"
#define	STR_REPAIR_FAILED	                     "Repair failed!"
#define	STR_INVALID_TITLE	                     "Error: Invalid title!"
#define	STR_NOT_FROM_YOUR_GUILD	     "The target does not belong to your guild."
#define	STR_ITEM_DAMAGED	                     "The item has been damaged!"
#define	STR_VITAL_POINT_STRICKEN	     "Your vital point has been stricken and you are unable to talk!"
#define	STR_CHANGE_NAME	                     "You have changed your name to %s."
#define	STR_INCREASE_MONEY	                     "[Your money is increased.]"
#define	STR_INCREASE_ITEM	                     "[Your item is increased.]"
#define	STR_KICKOUTALL	                     "Start kickoutall. All players are logging off and logging in is forbidden."
#define	STR_ACTION_SEEN	                     "ACTION can be seen."
#define	STR_ACTION_NOTSEEN	                     "ACTION cannot been seen."
#define	STR_NO_STOP	                                     "You cannot stop in the destination!"
#define	STR_LOCAL_TEST	                     "Caution: The command is for local test only. Otherwise the server may collapse!"
#define	STR_ACTION_UPDATED	                     "[ACTION has been updated.]"
#define	STR_KICK_OUT_GUILD	                     "%s has been kick out of the guild!"
#define	STR_NO_PRIZE	                                     "Sorry, no prize for you or the prize has not been verified in the prize claiming webpage."
#define	STR_NO_LV_BROADCAST	                     "Your level is not high enough and you cannot broadcast!"
#define	STR_NO_MANA_BROADCAST	     "Your mana is not high enough and you cannot broadcast!"
#define	STR_INVALID_CHARACTER	     "Invalid character is found in the message!"
#define	STR_LOW_LEVEL	                                     "Your level is too low!"
#define	STR_GM_NO_TEAM	                     "[GM] cannot use the team command."
#define	STR_INTEAM_NOJOIN	                     "[Team]You are already in a team and cannot join another team."
#define	STR_NO_APPLICANT     	                     "[Team]The applicant is not found."
#define	STR_NO_TEAM	                                     "[Team]The target has not created a team."
#define	STR_FORBIDDEN_JOIN	                                     "[Team]The team is forbidden access."
#define	STR_TEAM_FULL	                                     "[Team]The team is full."
#define	STR_NO_CAPTAIN_CLOSE	    "[Team]Please click on the captain."
#define	STR_JOIN_REQUEST_SENT	     "[Team]Request to join team has been sent out."
#define	STR_INVI_SENT	                                     "[Team]Invitation to join team has been sent out out. Please wait for response."
#define	STR_NO_TEAM_TO_INVITE	     "[Team]You haven't created a team. How can you accept other player to a team?"
#define	STR_NOT_CAPTAIN_INVITE	     "[Team]You are not the captain. How can you accept other player to the team?"
#define	STR_YOUR_TEAM_FULL		     "[Team]Your team is full."
#define	STR_APPLICANT_NOT_FOUND	     "[Team]The applicant is not found."
#define	STR_HAVE_JOIN_TEAM	                                     "[Team]You are already in a team and cannot join another team."
#define	STR_NOT_TO_JOIN	     "[Team]The target has not requested to join the team."
#define	STR_NOTEAM_TO_INVITE	                     "[Team]You haven't created a team and cannot invite others to join."
#define	STR_TEAM_CLOSED	                     "[Team]Team is closed. Please open it first."
#define	STR_NOT_CAPTAIN_ACCEPT	     "[Team]You are not the captain. How can you invite other players to the team?"
#define	STR_INVITED_NOT_FOUND	     "[Team]The invited target is not found."
#define	STR_HAS_IN_TEAM	                                     "[Team]The target is in another team. Invitation failed."
#define	STR_INVITE_SENT		"[Team]Invitation has been sent."
#define	STR_SENT_WAIT	                     "[Team]Request has been sent out. Please wait."
#define	STR_INTEAM_NOACCEPT       	                     "[Team]You have been in a team and cannot agree to join another team."
#define	STR_INVITER_NOT_FOUND	     "[Team]The inviter is not found."
#define	STR_NOT_CREATE_TEAM	                     "[Team]The target has not created a team."
#define	STR_HIS_TEAM_FULL	                     "[Team]The target's team is full."
#define	STR_NOT_BE_INVIITED	                     "[Team]The target did not invite you to the team."
#define	STR_NO_TEAM_TO_LEAVE                     "[Team]You are not in a team and cannot leave."
#define	STR_NO_TEAM_TO_DISMISS               "[Team]You haven't created a team yet and cannot dismiss."
#define	STR_NOT_CAPTAIN_DISMISS	                     "[Team]You are not the captain and cannot dismiss the team."
#define	STR_NO_TRADE_IN_BATTLE	     "Error: You cannot use trade command while in battle!"
#define	STR_NO_TRADE_IN_TEAM	     "Error: You cannot use trade command while you are in a team!"
#define	STR_NO_IN_TEAM		     "[Team]You do not have a team yet."
#define	STR_NO_TRADE_TARGET	                     "[Trade]The trading target is not found."
#define	STR_TARGET_TRADING	                     "[Trade]The target is trading with someone else. Please try later."
#define	STR_TRADING_REQEST_SENT	     "[Trade]Request for trading has been sent out."
#define	STR_NOT_FOR_TRADE	                     "Error: the item cannot be traded!"
#define	STR_FREE_PK	                                     "Free PK mode. You can attack anyone."
#define	STR_PEACE	                                     "Peace mode. You can only attack monsters and won't hurt other players."
#define	STR_TEAM_PK	                                     "Team PK mode. You can attack monsters and players except for your teammates."
#define	STR_JOIN_A_GUILD	                     "%s joined a guild."
#define	STR_BONUS					"Congratulations! You have got %u prizes.  Please go to trade market to claim prize!"
#define	STR_TO_MAKE_FRIEND			"%s wishes to make friends with you!"
#define	STR_MAKE_FRIEND				"%s and %s are friends from now on!"
#define	STR_BREAK_FRIEND			"%s broke up friendship with %s."
#define	STR_MARRY					"%s and %s are pronounced the husband and wife. They promise to love and care for each other for better or worse."
#define	STR_DIVORCE					"%s and %s got divorced because the love is not there anymore!"
#define	STR_SYN_CONQUER				"[%s] has occupied the Guild House finally after fighting bravely and persistently!"
#define	STR_POLICE_WANTED_ORDER		"Confirm：Target %s，this person was saw at %s recently."
#define	STR_GOTO_JAIL				"%s has killed too much and been put into the jail at last."

//---------------------------------------------------------------------------
#endif
