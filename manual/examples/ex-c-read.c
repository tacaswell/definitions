 NXopen ('NXfile.nxs', NXACC_READ, &fileID);
   NXopengroup (fileID, "Entry", "NXentry");
     NXopengroup (fileID, "Data", "NXdata");
       NXopendata (fileID, "time_of_flight");
         NXgetinfo (fileID, &rank, dims, &datatype);
         NXmalloc ((void **) &tof, rank, dims, datatype);
         NXgetdata (fileID, tof);
       NXclosedata (fileID);
     NXclosegroup (fileID);
   NXclosegroup (fileID);
 NXclose (fileID);