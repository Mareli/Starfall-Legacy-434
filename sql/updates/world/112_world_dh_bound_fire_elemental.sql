-- Bound Fire Elemental
SET @ENTRY := 44887;
SET @SOURCETYPE := 0;

DELETE FROM `smart_scripts` WHERE `entryorguid`=@ENTRY AND `source_type`=@SOURCETYPE;
UPDATE creature_template SET AIName="SmartAI" WHERE entry=@ENTRY LIMIT 1;
INSERT INTO `smart_scripts` (`entryorguid`,`source_type`,`id`,`link`,`event_type`,`event_phase_mask`,`event_chance`,`event_flags`,`event_param1`,`event_param2`,`event_param3`,`event_param4`,`action_type`,`action_param1`,`action_param2`,`action_param3`,`action_param4`,`action_param5`,`action_param6`,`target_type`,`target_param1`,`target_param2`,`target_param3`,`target_x`,`target_y`,`target_z`,`target_o`,`comment`) VALUES 
(@ENTRY,@SOURCETYPE,0,0,4,0,100,0,0,0,0,0,11,75025,0,0,0,0,0,2,0,0,0,0.0,0.0,0.0,0.0,"On Aggro - Cast Rush of Flame"),
(@ENTRY,@SOURCETYPE,1,0,0,0,100,0,1000,1000,15000,15000,11,75025,0,0,0,0,0,1,0,0,0,0.0,0.0,0.0,0.0,"On Aggro - Cast Rush of Flame 2nd Effect"),
(@ENTRY,@SOURCETYPE,2,0,4,0,100,0,0,0,0,0,11,75025,0,0,0,0,0,1,0,0,0,0.0,0.0,0.0,0.0,"On Aggro - Cast Rush of Flame 3th Effect"),
(@ENTRY,@SOURCETYPE,3,0,6,0,100,0,0,0,0,0,85,83744,0,0,0,0,0,7,0,0,0,0.0,0.0,0.0,0.0,"On Death - Cast Fire Ward");