using System;
using System.Collections.Generic;
using System.Text;

namespace DiscordBot
{
	public class stringHandler
	{
		public string GetRank(string name)
		{
			string rank;

			var nameArray = name.Split(" ");
			rank = nameArray[0];

			return rank;
		}

		public bool HasRank(string name)
		{
			if (name.StartsWith("Pvt"))
			{
				return true;
			}
			else if (name.StartsWith("PFC"))
			{
				return true;
			}
			else if (name.StartsWith("LCpl"))
			{
				return true;
			}
			else if (name.StartsWith("Cpl"))
			{
				return true;
			}
			else if (name.StartsWith("Sgt"))
			{
				return true;
			}
			else if (name.StartsWith("SSgt"))
			{
				return true;
			}
			else if (name.StartsWith("GySgt"))
			{
				return true;
			}
			else if (name.StartsWith("MSgt"))
			{
				return true;
			}
			else if (name.StartsWith("1Sgt"))
			{
				return true;
			}
			else if (name.StartsWith("SgtMaj"))
			{
				return true;
			}
			else if (name.StartsWith("MGySgt"))
			{
				return true;
			}
			else if (name.StartsWith("SgtMaj"))
			{
				return true;
			}
			else if (name.StartsWith("WO1"))
			{
				return true;
			}
			else if (name.StartsWith("CWO2"))
			{
				return true;
			}
			else if (name.StartsWith("CWO3"))
			{
				return true;
			}
			else if (name.StartsWith("CWO4"))
			{
				return true;
			}
			else if (name.StartsWith("CWO5"))
			{
				return true;
			}
			else if (name.StartsWith("2ndLt"))
			{
				return true;
			}
			else if (name.StartsWith("1stLt"))
			{
				return true;
			}
			else if (name.StartsWith("Capt"))
			{
				return true;
			}
			else if (name.StartsWith("Maj"))
			{
				return true;
			}
			else if (name.StartsWith("LtCol"))
			{
				return true;
			}
			else if (name.StartsWith("Col"))
			{
				return true;
			}
			else if (name.StartsWith("HR"))
			{
				return true;
			}
			else if (name.StartsWith("HN"))
			{
				return true;
			}
			else if (name.StartsWith("HM3"))
			{
				return true;
			}
			else if (name.StartsWith("HM2"))
			{
				return true;
			}
			else if (name.StartsWith("HM1"))
			{
				return true;
			}
			else if (name.StartsWith("HMC"))
			{
				return true;
			}
			else if (name.StartsWith("HMCS"))
			{
				return true;
			}
			else if (name.StartsWith("HMCM"))
			{
				return true;
			}
			return false;
		}

		public string FindNextRank(string rank)
		{
			if (rank == "Pvt")
			{
				rank = "PFC";
			}
			else if (rank == "PFC")
			{
				rank = "LCpl";
			}
			else if (rank == "LCpl")
			{
				rank = "Cpl";
			}
			else if (rank == "Cpl")
			{
				rank = "Sgt";
			}
			else if (rank == "Sgt")
			{
				rank = "SSgt";
			}
			else if (rank == "SSgt")
			{
				rank = "GySgt";
			}
			else if (rank == "GySgt")
			{
				rank = "MSgt";
			}
			else if (rank == "MSgt")
			{
				rank = "SgtMaj";
			}
			else if (rank == "W01")
			{
				rank = "CWO2";
			}
			else if (rank == "CWO2")
			{
				rank = "CWO3";
			}
			else if (rank == "CWO3")
			{
				rank = "CWO4";
			}
			else if (rank == "CWO4")
			{
				rank = "CWO5";
			}
			else if (rank == "SgtMaj")
			{
				rank = "2ndLt";
			}
			else if (rank == "2ndLt")
			{
				rank = "1stLt";
			}
			else if (rank == "1stLt")
			{
				rank = "Capt";
			}
			else if (rank == "Capt")
			{
				rank = "Maj";
			}
			else
			{
				rank = "Pvt";
			}
			return rank;
		}
	}
}
