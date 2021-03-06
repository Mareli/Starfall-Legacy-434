REPLACE INTO `spell_script_names`(`spell_id`, `scriptname`) VALUES
(86228, 'spell_tav_twilight_flames_realm'),
(92867, 'spell_tav_twilight_flames_realm'),
(86199, 'spell_tav_twilight_flames'),
(92868, 'spell_tav_twilight_flames'),
(92869, 'spell_tav_twilight_flames'),
(92870, 'spell_tav_twilight_flames'),
(86406, 'spell_tav_dazzling_destruction'),
(92926, 'spell_tav_dazzling_destruction'),
(92927, 'spell_tav_dazzling_destruction'),
(92928, 'spell_tav_dazzling_destruction'),
(86840, 'spell_tav_devouring_flames_aura'),
(93063, 'spell_tav_dazzling_destruction_realm_damage'),
(86293, 'spell_tav_twilight_shift_1'),
(89684, 'spell_tav_twilight_shift_2'),
(93069, 'spell_tav_twilight_shift_2'),
(93070, 'spell_tav_twilight_shift_2'),
(93071, 'spell_tav_twilight_shift_2'),
(86505, 'spell_tav_fabulous_flames_damage'),
(92907, 'spell_tav_fabulous_flames_damage'),
(92908, 'spell_tav_fabulous_flames_damage'),
(92909, 'spell_tav_fabulous_flames_damage');

DELETE FROM `conditions` WHERE `SourceEntry` IN (86840);
INSERT INTO conditions (SourceTypeOrReferenceId, SourceGroup, SourceEntry, SourceId, ElseGroup, ConditionTypeOrReference, ConditionTarget, ConditionValue1, ConditionValue2, ConditionValue3, NegativeCondition, ErrorType, ScriptName, Comment) VALUES
(13, 7, 86840, 0, 0, 31, 0, 3, 46588, 0, 0, 0, '', 'Devouring Flames Aura - Apply on Convective Flames');

UPDATE `creature_template` SET `minlevel`= 87, `maxlevel`= 87, `faction`= 14, `unit_flags`= 33554432, `flags_extra`= 128, `InhabitType`= 4 WHERE `entry`= 46588;
REPLACE INTO `creature_template_addon` (`entry`, `auras`) VALUES (46588, '');

UPDATE `creature_template` SET `unit_flags`= 0, `npcflag`= 16777216, `scale`= 2.32, `minlevel`= 85, `maxlevel`= 85 WHERE `entry`= 46301;
REPLACE INTO `npc_spellclick_spells` (`npc_entry`, `spell_id`, `cast_flags`, `user_type`) VALUES
(46301, 86293, 3, 0);
