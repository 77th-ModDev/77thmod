﻿using System;

namespace DiscordBot
{
	class Program
	{
		static void Main(string[] args)
		{
			var bot = new BotBrain();
			bot.RunAsync().GetAwaiter().GetResult();
		}
	}
}
